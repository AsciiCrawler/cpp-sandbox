#include "iostream"
#include "thread"
#include "vector"
#include "memory"

void printArray(std::vector<int> &arr)
{
    std::cout << "[ ";
    for (auto i : arr)
        std::cout << i << " ";
    std::cout << "]" << std::endl;
}

void insertionSort(std::vector<int> &arr)
{
    for (auto it = arr.begin() + 1; it < arr.end(); it++)
    {
        int key = *it;
        auto j = (it - 1);

        while (j >= arr.begin() && *j > key)
        {
            *(j + 1) = *j;
            --j;
        }

        *(j + 1 ) = key;
    }
}

int main(int argc, const char *argv[])
{
    std::vector<int> arr = {5, 2, 4, 6, 1, 3};
    printArray(arr);
    insertionSort(arr);
    printArray(arr);
    return 0;
}