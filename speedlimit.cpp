#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main()
{

    int angka;
    int a;
    int b[90];
    int hasil = 0;
    int y;
    int kali;
    while (true)
    {
        int i = 1;
        cin >> angka;

        if (angka == -1)
        {
            break;
        }

        while (i <= angka)
        {
            b[0] = 0;
            scanf("%d %d", &a, &b[i]);
            y = b[i - 1];
            kali = b[i] - y;

            hasil += a * kali;
            i++;
        }
        cout << hasil << " miles\n";
        hasil = 0;
    }
}