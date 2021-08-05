#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    int x, y, z;

    cin >> x >> y >> z;

    if (x * y == z)
    {
        printf("%d*%d=%d", x, y, z);
    }
    else if (x / y == z)
    {
        printf("%d/%d=%d", x, y, z);
    }
    else if (x + y == z)
    {
        printf("%d+%d=%d", x, y, z);
    }
    else if (x % y == z)
    {
        char xx = '%';
        printf("%d%c%d=%d", x, xx, y, z);
    }
    else if (x - y == z)
    {
        printf("%d-%d=%d", x, y, z);
    }

    else if (z * y == x)
    {
        printf("%d=%d*%d", x, y, z);
    }
    else if (y / z == x)
    {
        printf("%d=%d/%d", x, y, z);
    }
    else if (y + y == x)
    {
        printf("%d=%d+%d", x, y, z);
    }
    else if (y % z == x)
    {
        char xx = '%';
        printf("%d=%d%c%d", x, y, xx, z);
    }
    else if (y - z == x)
    {
        printf("%d=%d-%d", x, y, z);
    }
    cout << endl;
    return 0;
}