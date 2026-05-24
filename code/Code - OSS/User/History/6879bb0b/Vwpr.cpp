#include <iostream>
using namespace std;

#define A 10

void sum(int *x, int *y, int *z)
{
    *z = *x + *y;
    cout << z << endl;
}

int main()
{
    int z;
    int a = A, b = 3;
    sum(&a,&b,&z); 
    cout << z << endl;
    return 0;
}