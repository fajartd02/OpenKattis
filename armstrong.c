#include <stdio.h>

int main()
{
    int sum;
    int kali, cek, angka;
    int i;

    for (i = 100; i <= 500; i++)
    {
        sum=0;
        angka = i;
        cek = i;
        while (cek != 0)
        {
            kali = cek % 10;
            sum = sum + (kali * kali * kali);
            cek /= 10;
        }
        if (angka == sum)
        {
            printf("%d\n", angka);
        }
    }
    return 0;
}