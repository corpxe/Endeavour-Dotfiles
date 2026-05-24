#include <iostream>
using namespace std;

void countSort(int arr[], int n)
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    int count[max + 1] = {0};

    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    int index = 0;

    for (int i = 0; i <= max; i++)
    {
        while (count[i] > 0)
        {
            arr[index++] = i;
            count[i]--;
        }
    }
}

int main()
{
    int arr[] = {4, 2, 2, 8, 3};
    int n = 5;

    countSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}