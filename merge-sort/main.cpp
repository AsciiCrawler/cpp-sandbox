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

/* void merge(std::vector<int> &arr, int p, int q, int r)
{
    int n1 = q - p;
    int n2 = r - q;

    std::vector<int> L(n1 + 1);
    std::vector<int> R(n2 + 1);

    for (size_t i = 0; i < L.size() - 1; i++)
        L[i] = arr[p + i];

    for (size_t i = 0; i < R.size(); i++)
        R[i] = arr[q + i];

    L[n1] = INT32_MAX;
    R[n2] = INT32_MAX;

    int i = 0;
    int j = 0;

    for (size_t k = p; k < r; k++)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            ++i;
        }
        else
        {
            arr[k] = R[j];
            ++j;
        }
    }
}

void mergeSort(std::vector<int> &arr, int p, int r)
{
    if (p >= r)
        return;

    int q = (p + r) / 2;

    std::cout << "q: " << q << std::endl;
    mergeSort(arr, p, q);
    mergeSort(arr, q + 1, r);
    merge(arr, p, q, r);
}

int main(int argc, const char *argv[])
{
    std::vector<int> arr = {2, 5, 7, -1};
    printArray(arr);


    mergeSort(arr, 0, arr.size()-1);



    printArray(arr);
    return 0;
} */

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