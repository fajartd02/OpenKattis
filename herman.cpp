#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{

    double n;
    cin >> n;

    double x, y;
    x = M_PI * n * n;
    y = n * n * 2;
    printf("%.6lf\n%.6lf\n",x,y);
}