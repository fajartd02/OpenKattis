#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int kasus;
    scanf("%d", &kasus);

    int i;
    long angka;
    long long hasil = 0;
    for (i = 0; i < kasus; i++)
    {
        scanf("%ld", &angka);
        hasil += angka;
    }
    printf("%lld\n", hasil);

    return 0;
}