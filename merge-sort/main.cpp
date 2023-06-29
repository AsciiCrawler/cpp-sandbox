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

#include <iostream>
#include <vector>
#include <algorithm>

void merge(std::vector<int> &arr, int l, int m, int r)
{
    std::vector<int> leftArr(arr.begin() + l, arr.begin() + m + 1);
    std::vector<int> rightArr(arr.begin() + m + 1, arr.begin() + r + 1);

    std::vector<int>::iterator left_it = leftArr.begin();
    std::vector<int>::iterator right_it = rightArr.begin();
    std::vector<int>::iterator arr_it = arr.begin() + l;

    while (left_it != leftArr.end() && right_it != rightArr.end())
    {
        if (*left_it <= *right_it)
        {
            *arr_it = *left_it;
            ++left_it;
        }
        else
        {
            *arr_it = *right_it;
            ++right_it;
        }
        ++arr_it;
    }

    while (left_it != leftArr.end())
    {
        *arr_it = *left_it;
        ++left_it;
        ++arr_it;
    }

    while (right_it != rightArr.end())
    {
        *arr_it = *right_it;
        ++right_it;
        ++arr_it;
    }
}

void merge_sort(std::vector<int> &arr, int l, int r)
{
    if (l >= r)
        return;

    int m = (l + r) / 2;

    merge_sort(arr, l, m);
    merge_sort(arr, m + 1, r);

    merge(arr, l, m, r);
}

int main()
{
    std::vector<int> v{2, 4, 5, 7, 1, 2, 3, 6};

    printArray(v);
    merge_sort(v, 0, v.size() - 1);
    printArray(v);
}