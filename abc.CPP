#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    string af;
    int a, b, c;
    cin >> x >> y >> z;
    if (x < y && x < z)
    {
        a = x;
        if (y < z)
        {
            b = y;
            c = z;
        }
        else
        {
            b = z;
            c = y;
        }
    }
    else if (y < x && y < z)
    {
        a = y;
        if (x < z)
        {
            b = x;
            c = z;
        }
        else
        {
            b = z;
            c = x;
        }
    }
    else if (z < x && z < y)
    {
        a = z;
        if (x < y)
        {
            b = x;
            c = y;
        }
        else
        {
            b = y;
            c = x;
        }
    }

    cin >> af;
    if (af == "ABC")
    {
        cout << a << " " << b << " " << c << endl;
    }
    else if (af == "ACB")
    {
        cout << a << " " << c << " " << b << endl;
    }
    else if (af == "BAC")
    {
        cout << b << " " << a << " " << c << endl;
    }
    else if (af == "BCA")
    {
        cout << b << " " << c << " " << a << endl;
    }
    else if (af == "CAB")
    {
        cout << c << " " << a << " " << b << endl;
    }
    else if (af == "CBA")
    {
        cout << c << " " << b << " " << a << endl;
    }
    return 0;
}
