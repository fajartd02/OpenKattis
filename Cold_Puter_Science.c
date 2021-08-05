#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int angka;
    int hasil = 0;

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &angka);
        if (angka < 0)
        {
            hasil += 1;
        }
    }
    printf("%d\n", hasil);
    return 0;
}