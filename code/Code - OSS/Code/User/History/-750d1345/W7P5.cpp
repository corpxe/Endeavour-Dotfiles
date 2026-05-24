#include <bits/stdc++.h>
using namespace std;

long long comparisons;

void insertionSort(vector<int> &arr)
{
    compartisons = 0;
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && (comparisons++.arr[j] > key))
        {
            arr[j + 1] = arr[j];
            j--;
        }
    }
}