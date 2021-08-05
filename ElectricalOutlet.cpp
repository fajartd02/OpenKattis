#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int kasus;
    cin >> kasus;

    int i, j;
    int angka;
    int hasil = 0;
    int answer[10];
    int total;
    for (i = 0; i < kasus; i++)
    {
        cin >> angka;
        for (j = 0; j < angka; j++)
        {
            cin >> answer[j];
            hasil += answer[j];
        }
        total = hasil + 1 - angka;
        cout << total << endl;
        hasil = 0;
        total = 0;
    }

    return 0;
}