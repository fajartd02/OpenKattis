#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll x, y;

    while (cin >> x >> y)
    {
        if (x - y < 0)
        {
            cout << (x - y) * -1 << endl;
        }
        else
            cout << x - y << endl;
    }
    return 0;
}