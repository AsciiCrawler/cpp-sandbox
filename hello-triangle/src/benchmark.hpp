#include "chrono"
#include "string"
#include "string"
class Benchmark
{
public:
    void start();
    void end();
    void getTime(std::string _benchmarkName = "Benchmark");
    Benchmark();

private:
    std::chrono::high_resolution_clock::time_point startPoint;
    std::chrono::high_resolution_clock::time_point endPoint;
};