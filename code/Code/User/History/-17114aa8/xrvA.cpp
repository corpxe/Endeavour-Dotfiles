#include <iostream>
using namespace std;

int comparisons = 0;

void heapify(int arr[], int n, int i)
{
    int largest = i;

    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Compare left child
    if (left < n)
    {
        comparisons++;

        if (arr[left] > arr[largest])
        {
            largest = left;
        }
    }

    // Compare right child
    if (right < n)
    {
        comparisons++;

        if (arr[right] > arr[largest])
        {
            largest = right;
        }
    }

    // Swap if largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Heapify affected subtree again
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    // Build Max Heap
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    // Extract elements one by one
    for (int i = n - 1; i > 0; i--)
    {
        // Move largest element to end
        swap(arr[0], arr[i]);

        // Heapify reduced heap
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr[] = {5, 2, 8, 1, 3};
    int n = 5;

    heapSort(arr, n);

    cout << "Sorted Array:\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nComparisons = " << comparisons;

    return 0;
}