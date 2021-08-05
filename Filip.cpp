#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int bagiA = a;
    int bagiB = b;
    int akhir1, akhir2;
    int hasil1 = 0;
    int hasil2 = 0;
    while (bagiA != 0)
    {
        akhir1 = bagiA % 10;
        hasil1 = hasil1 * 10 + akhir1;
        bagiA = bagiA / 10;
    }
    while (bagiB != 0)
    {
        akhir2 = bagiB % 10;
        hasil2 = hasil2 * 10 + akhir2;
        bagiB = bagiB / 10;
    }

    if (hasil1 > hasil2)
    {
        cout << hasil1 << endl;
    }
    else if (hasil2 > hasil1)
    {
        cout << hasil2 << endl;
    }

       return 0;
}