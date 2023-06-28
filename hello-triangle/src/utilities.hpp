
#include "vector"
#include "string"

class Utilities
{
public:
    static void fillVector(std::vector<int> &arr, const int vectorSize, const int randomMax);
    static void printVector(const std::vector<int> &arr, const bool displayShort = false);
    static void printVector(const std::vector<int *> &arr, const bool displayShort = false);
    static std::string readFile(const char *filePath);

private:
};