#include "utilities.hpp"
#include "vector"
#include "random"
#include "iostream"
#include "iostream"
#include "string"
#include "fstream"

std::string getNumberString(std::string numberString)
{
    return (numberString.length() == 1) ? ("0" + numberString) : numberString;
}

void Utilities::fillVector(std::vector<int> &arr, const int vectorSize, const int randomMax)
{
    arr.reserve(vectorSize);
    std::random_device _randomDevice;
    for (int i = 0; i < vectorSize; i++)
        arr.push_back(_randomDevice() % randomMax);
}

bool isSorted(const std::vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
        if (arr[i] > arr[i + 1])
            return false;
    return true;
}

void Utilities::printVector(const std::vector<int> &arr, const bool displayShort)
{
    std::cout << "[ ";
    if (displayShort)
    {
        for (int i = 0; i < 3; i++)
            std::cout << getNumberString(std::to_string(arr[i])) << ", ";

        std::cout << " ... ";

        for (int i = arr.size() - 4; i < arr.size(); i++)
            std::cout << getNumberString(std::to_string(arr[i])) << (i == arr.size() - 1 ? "" : ", ");
    }
    else
        for (const int _e : arr)
            std::cout << getNumberString(std::to_string(_e)) << " ";
    std::cout << "] " << (isSorted(arr) ? " - SORTED" : " - UNSORTED");
    std::cout << std::endl;
}

std::string Utilities::readFile(const char *filePath)
{
    std::string content;
    std::ifstream fileStream(filePath, std::ios::in);

    if (!fileStream.is_open())
    {
        std::cerr << "Could not read file " << filePath << ". File does not exist." << std::endl;
        return "";
    }

    std::string line = "";
    while (!fileStream.eof())
    {
        std::getline(fileStream, line);
        content.append(line + "\n");
    }

    fileStream.close();
    return content;
}