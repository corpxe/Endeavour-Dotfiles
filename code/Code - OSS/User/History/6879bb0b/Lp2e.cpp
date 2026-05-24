#include <iostream>
using namespace std;

#define A 10

int sum(int *x, int *y, int *z)
{
    *z = *x + *y;
    return 0;
}

int main()
{
    int z;
    int a = A, b = 3;
    cout << sum(&a,&b,&z) << endl;
    return 0;
}