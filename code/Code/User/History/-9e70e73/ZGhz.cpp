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
            comparisons++;
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    for (int i = 0; i < length; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    cout << "Total comparisons : " << comparisons;
}

int main()
{
    int a[] = {8, 2, 7, 4, 55, 1, 9, 3};
    int length = 8;

    insertion_sort(a, length);
    return 0;
}