#include <iostream>
using namespace std;

void countSort(int arr[], int n)
{
    int comparisons = 0;

    // Find maximum element
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        comparisons++;

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Create count array
    int count[max + 1] = {0};

    // Store frequency of elements
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // Build sorted array
    int index = 0;

    for (int i = 0; i <= max; i++)
    {
        while (count[i] > 0)
        {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }

    // Print sorted array
    cout << "Sorted Array:\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nComparisons = " << comparisons;
}

int main()
{
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = 7;

    countSort(arr, n);

    return 0;
}