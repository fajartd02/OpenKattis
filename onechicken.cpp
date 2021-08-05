#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x < y)
    {
        printf("Dr. Chaz will have %d pieces of chicken left over!\n", y - x);
    }
    else
    {
        printf("Dr. Chaz needs %d more pieces of chicken!\n", x - y);
    }
    return 0;
}