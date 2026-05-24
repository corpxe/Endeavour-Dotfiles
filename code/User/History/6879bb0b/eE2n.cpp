#include <iostream>
using namespace std;

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
    cout << sum(2,3);
    cout << sum(2,3,4);
    return 0;
}