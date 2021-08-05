#include <iostream>
#include <cmath>
#include <ctype.h>

using namespace std;

int main()
{
    int x;
    int y;
    cin >> x;
    y = ceil(log2(x));
    cout << y + 1;
    return 0;
}