#include <iostream>
using namespace std;

struct
{
    int a, b, c;
} duit;

int main()
{
    cin >> duit.a >> duit.b >> duit.c;
    int a = duit.a * 3;
    int b = duit.b * 2;
    int c = duit.c * 1;
    int hasil = a + b + c;
    string x, y;

    if (hasil >= 8)
    {
        x = "Province";
    }
    else if (hasil >= 5)
    {
        x = "Duchy";
    }
    else if (hasil >= 2)
    {
        x = "Estate";
    }

    if (hasil >= 6)
    {
        y = "Gold";
    }
    else if (hasil >= 3)
    {
        y = "Silver";
    }
    else if (hasil >= 0)
    {
        y = "Copper";
    }

    if (hasil < 2)
    {
        cout << y << endl;
    }
    else
    {
        cout << x << " or " << y << endl;
    }

    return 0;
}