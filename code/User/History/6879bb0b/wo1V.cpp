#include <iostream>
using namespace std;

#define A 10

int sum(int *x, int *y, int *z)
{
    *z = *x + *y;
}

int main()

int z;
{
    cout << sum(A,3,z) << endl;
    return 0;
}