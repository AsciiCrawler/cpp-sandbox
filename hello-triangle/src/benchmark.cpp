#include "benchmark.hpp"
#include "chrono"
#include "iostream"
#include "string"

void Benchmark::start()
{
    this->startPoint = std::chrono::high_resolution_clock::now();
}

void Benchmark::end()
{
    this->endPoint = std::chrono::high_resolution_clock::now();
}

void Benchmark::getTime(std::string _benchmarkName)
{
    std::string message = "";
    if (_benchmarkName.length() > 0)
        message += "[" + _benchmarkName + "] : ";
    else
        message += "[Benchmark] : ";

    std::cout << message << std::chrono::duration_cast<std::chrono::milliseconds>(this->endPoint - this->startPoint).count() << " ms" << std::endl;
    std::cout << message << std::chrono::duration_cast<std::chrono::microseconds>(this->endPoint - this->startPoint).count() << " micro" << std::endl;
    std::cout << message << std::chrono::duration_cast<std::chrono::nanoseconds>(this->endPoint - this->startPoint).count() << " nano" << std::endl;
}

Benchmark::Benchmark()
{
    this->startPoint = std::chrono::high_resolution_clock::now();
    this->endPoint = std::chrono::high_resolution_clock::now();
}