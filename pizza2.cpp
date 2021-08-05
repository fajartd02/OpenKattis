#include <iostream>
using namespace std;
typedef long double lb;
int main()
{
    int C, R;
    cin >> R >> C;
    C = R - C;

    lb out = R * R;
    lb in = C * C;

    cout.precision(10);
    cout << in / out * 100.0 << endl;
}