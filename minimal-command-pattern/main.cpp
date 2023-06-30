#include "iostream"
#include "memory"
#include "src/jumpCommand.hpp"
#include "src/command.hpp"
#include "src/button.hpp"

int main()
{
    std::unique_ptr<Button> button = std::make_unique<Button>();
    button->cmd = std::make_unique<JumpCommand>();
    button->trigger();

    return 0;
}