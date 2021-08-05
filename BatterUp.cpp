#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float kasus;
    cin >> kasus;
    float angka;
    float bagi = kasus;
    float hasil = 0;
    float i;
    float total;
    for (i = 0; i < kasus; i++)
    {
        cin >> angka;

        if (angka > 0)
        {
            hasil += angka;
        }
        else if (angka < 0)
        {
            bagi--;
        }
    }

    total = hasil / bagi;
    cout << total << endl;
    total = 0;
    hasil = 0;
    bagi = 0;
}