#include <iostream>
#include <stdio.h>
using namespace std;
#define PI 3.141592654
int main()
{
    while (1)
    {
        double r, m, c;
        cin >> r >> m >> c;
        if (r == 0 && m == 0 && c == 0)
        {
            break;
        }
        printf("%.9f %.9f\n", r * r * PI, 4 * r * r * c / m);
    }
}