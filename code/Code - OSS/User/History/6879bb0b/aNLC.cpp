
#include <iostream>
using namespace std;

/*
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
*/

int main()
{
    struct X
    {
        int a = 1, b = 2;
    };

    struct Y
    {
        int a = 10, b = 20;
    };

    cout << X.a+X.b << endl;
    cout << Y.a+Y.b << endl;

    return 0;
}