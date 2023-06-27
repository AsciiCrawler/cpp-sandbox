#include "iostream"
#include "thread"
#include "vector"
#include "mutex"

const int numberOfThreads = 8;
int counter = 0;
std::mutex _mutex;

void threadFunction()
{
    for (int i = 0; i < 100000; i++)
    {
        _mutex.lock();
        ++counter;
        _mutex.unlock();
    }
}

int main(int argc, const char *argv[])
{
    std::vector<std::thread> _threads;
    for (int i = 0; i < numberOfThreads; i++)
        _threads.push_back(std::thread(threadFunction));

    for (int i = 0; i < numberOfThreads; i++)
        _threads[i].join();

    std::cout << counter << std::endl;

    return 0;
}