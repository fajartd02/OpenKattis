#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int kasus;
    scanf("%d", &kasus);

    int a;
    float b;
    int i;
    float x, y, z;
    float jantung;
    for (i = 0; i < kasus; i++)
    {
        scanf("%d %f", &a, &b);
        y = 60 * a / b;
        jantung = 60 / b;
        x = y + jantung;
        z = y - jantung;

        printf("%.4f %.4f %.4f\n", z, y, x);
    }
    return 0;
}