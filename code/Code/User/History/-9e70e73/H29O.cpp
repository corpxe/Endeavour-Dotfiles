// Finds the value large number as per the current index.
// 1st element is considered sorted.

#include <iostream>
using namespace std;

int insertion_sort(int a[], int length)
{
    int comparisons = 0;

    for (int i = 1; i < length; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        if (j >= 0)
        {
            comparisons++;
        }

        a[j + 1] = key;
    }

    for (int i = 0; i < length; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    cout << "Total comparisons : " << comparisons;
    return 0;
};

int main()
{
    int n;

    cout << "enter the number of elements : ";
    cin >> n;

    int arr[n];

    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << "  ";
    // }

    insertion_sort(arr, n);

    return 0;
}