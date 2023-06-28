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
    for (size_t i = 1; i < arr.size(); i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            --j;
        }

        arr[j+1] = key;
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