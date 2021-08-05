#include <iostream>
#include <cmath>
#include <math.h>
#define PI 3.14159265
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int  total;
    total = a / sin(b * PI / 180);
    cout << total+1 << endl;
    return 0;
}