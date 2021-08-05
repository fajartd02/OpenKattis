#include <iostream>

using namespace std;

int main()
{
    int kasus;
    cin >> kasus;
    int i;
    int a, b, c;
    for (i = 1; i <= kasus; i++)
    {
        cin >> a >> b >> c;
        if (a < (b - c))
        {
            cout << "advertise" << endl;
        }
        else if (a > (b - c))
        {
            cout << "do not advertise" << endl;
        }
        else if (a == (b - c))
        {
            cout << "does not matter" << endl;
        }
    }
    return 0;
}