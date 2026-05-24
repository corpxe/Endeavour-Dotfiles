#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int comparisons = 0;

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            comparisons++;
            arr[j + 1] = arr[j];
            j--;
        }

        if (j >= 0)
            comparisons++;

        arr[j + 1] = key;
    }

    cout << "Sorted Array:\n";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\nComparisons = " << comparisons;
}

int main()
{
    int arr[] = {5, 2, 4, 1, 3};
    int n = 5;

    insertionSort(arr, n);
}