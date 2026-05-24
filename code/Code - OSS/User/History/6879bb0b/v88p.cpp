#include <iostream>
using namespace std;

#define A 10

int sum(int *x, int *y, int *z)
{
    *z = *x + *y;
}

int main()
{
    cout << sum(A,3) << endl;
    cout << sum(A,3,4) << endl;
    return 0;
}