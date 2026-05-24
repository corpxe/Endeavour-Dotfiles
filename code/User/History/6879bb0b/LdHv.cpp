#include <iostream>
using namespace std;

#define A 5;

int sum(int x, int y)
{
    return (x+y);
}

int sum(int x, int y, int z)
{
    return (x+y+z);
}

int main()
{
    cout << sum(A,3) << endl;
    cout << sum(2,3,4) << endl;
    return 0;
}