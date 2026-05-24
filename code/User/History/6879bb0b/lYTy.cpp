#include <iostream>
using namespace std;

namespace sum1{
    sum(int x, int y);
}

namespace sum1{
    sum(int x, int y, int z);
}

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
    cout << sum(2,3) << endl;
    cout << sum(2,3,4) << endl;
    return 0;
}