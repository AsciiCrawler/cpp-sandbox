#include "stdio.h"
#include "iostream"
#include "stdint.h"
#include "assert.h"

#include "includes/SDL2/SDL.h"
#include "includes/glad/glad.h"
#include "src/utilities.hpp"
#include "string"
/* #include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/type_ptr.hpp" */

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 640

SDL_Window *window;
SDL_GLContext openGLContext;
bool isGameRunning = true;
float lastTime;
uint nFrames = 0;

float vertices[] = {
    -0.5f, -0.5f, 0.0f,
    0.5f, -0.5f, 0.0f,
    0.0f, 0.5f, 0.0f};

inline void
getFPS()
{
    ++nFrames;
    if (SDL_GetTicks() > lastTime)
    {
        float ms = (nFrames > 0 ? 1000.0f / float(nFrames) : 0.0f);
        std::string performanceInfoString;

        performanceInfoString += "FPS: " + std::to_string(int(ms > 0 ? 1000 / ms : 0)) + "\tms: " + std::to_string(ms);
        const char *performanceInfoChars = performanceInfoString.c_str();

        if (ms > 0)
            SDL_SetWindowTitle(window, performanceInfoChars);
        else
            SDL_SetWindowTitle(window, "fps = 0 ms = 0");

        nFrames = 0;
        lastTime += 1000;
    }
}

inline void InputSystem()
{
    SDL_Event Event;
    while (SDL_PollEvent(&Event))
    {
        if (Event.type == SDL_KEYDOWN)
            switch (Event.key.keysym.sym)
            {
            case SDLK_ESCAPE:
                isGameRunning = false;
                break;

            default:
                break;
            }
        else if (Event.type == SDL_QUIT)
            isGameRunning = false;
    }
}

void createWindow()
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_ACCELERATED_VISUAL, 1);
    SDL_GL_SetSwapInterval(1);

    window = SDL_CreateWindow("OpenGL Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN);

    openGLContext = SDL_GL_CreateContext(window);
     if (!gladLoadGLLoader((GLADloadproc) SDL_GL_GetProcAddress)) {
        std::cerr << "Failed to initialize the OpenGL context." << std::endl;
        exit(1);
    }
}

inline void checkShaderCompilationStatus(unsigned int id, std::string errorHint)
{
    int success;
    char infoLog[512];
    glGetShaderiv(id, GL_COMPILE_STATUS, &success);
    if (!success)
    {
        glGetShaderInfoLog(id, 512, NULL, infoLog);
        std::cout << "ERROR::" << errorHint << infoLog << std::endl;
    }
}

int main(int ArgCount, char **Args)
{
    createWindow();

    unsigned int vertexShader;
    vertexShader = glCreateShader(GL_VERTEX_SHADER);
    const std::string vertexShaderString = Utilities::readFile("assets/shader.vert");
    const char *vertexShaderChars = vertexShaderString.c_str();
    glShaderSource(vertexShader, 1, &vertexShaderChars, NULL);
    glCompileShader(vertexShader);
    checkShaderCompilationStatus(vertexShader, "VERTEX_SHADER");

    unsigned int fragmentShader;
    fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    const std::string fragmentShaderString = Utilities::readFile("assets/shader.frag");
    const char *fragmentShaderChars = fragmentShaderString.c_str();
    glShaderSource(fragmentShader, 1, &fragmentShaderChars, NULL);
    glCompileShader(fragmentShader);
    checkShaderCompilationStatus(fragmentShader, "FRAGMENT_SHADER");

    unsigned int shaderProgram;
    shaderProgram = glCreateProgram();
    glAttachShader(shaderProgram, vertexShader);
    glAttachShader(shaderProgram, fragmentShader);
    glLinkProgram(shaderProgram);

    glDeleteShader(vertexShader);   // don’t forget to delete the shader objects once we’ve linked them into the program object; we no longer need them anymore
    glDeleteShader(fragmentShader); // don’t forget to delete the shader objects once we’ve linked them into the program object; we no longer need them anymore

    /*  */
    unsigned int VAO, VBO;
    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);

    // bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
    glBindVertexArray(VAO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);

    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void *)0);
    glEnableVertexAttribArray(0);

    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);

    /*  */

    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    while (isGameRunning)
    {

        // BEGIN: SDL INPUT System
        InputSystem();
        // END: SDL INPUT System
        glClear(GL_COLOR_BUFFER_BIT); // CLEAR BEFORE ALL

        glUseProgram(shaderProgram);
        glBindVertexArray(VAO);
        glDrawArrays(GL_TRIANGLES, 0, 3);

        SDL_GL_SwapWindow(window); // Update Window => OpenGL Render
        // BEGIN: Get FPS
        getFPS();
        // END: Get FPS
    }

    glDeleteVertexArrays(1, &VAO);
    glDeleteBuffers(1, &VBO);
    glDeleteProgram(shaderProgram);

    SDL_GL_DeleteContext(openGLContext);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}