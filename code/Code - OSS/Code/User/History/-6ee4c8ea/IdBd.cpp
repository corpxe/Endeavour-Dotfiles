// Finds The next smallest number and swaps it with the current index.
// Entire Array is considered unsorted.

#include <iostream>
using namespace std;

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

    return 0;
}