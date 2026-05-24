// Breaks down the array to smaller portions till we have atomic values.
// Divide and conquer.

#include <iostream>
using namespace std;

void merge_sort(int a[], int n);
void merge(int a[], int l, int r);
void merge_sorted(int a[], int l, int m, int r);

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

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    merge_sort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d", arr[i]);
    printf("\n");

    return 0;
}

void merge_sort(int arr[], int n)
{
    merge_sorted(arr, 0, n - 1);
}

void merge(int arr[], int l, int r)
{
    int m = l + (r - l) / 2;
    merge(arr, l, m);
    merge(arr, m + 1, r);
}