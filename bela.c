#include <stdio.h>

int dominan(char n)
{
    if (n == 'A')
    {
        return 11;
    }
    if (n == 'K')
    {
        return 4;
    }
    if (n == 'Q')
    {
        return 3;
    }
    if (n == 'J')
    {
        return 20;
    }
    if (n == 'T')
    {
        return 10;
    }
    if (n == '9')
    {
        return 14;
    }
    if (n == '8')
    {
        return 0;
    }
    if (n == '7')
    {
        return 0;
    }
}

int ndominan(char n)
{
    if (n == 'A')
    {
        return 11;
    }
    if (n == 'K')
    {
        return 4;
    }
    if (n == 'Q')
    {
        return 3;
    }
    if (n == 'J')
    {
        return 2;
    }
    if (n == 'T')
    {
        return 10;
    }
    if (n == '9')
    {
        return 0;
    }
    if (n == '8')
    {
        return 0;
    }
    if (n == '7')
    {
        return 0;
    }
}

int main()
{
    int nn;
    char x;
    scanf("%d %c", &nn, &x);
    getchar();
    // printf("%d %c\n",n,x);
    int l = nn * 4;
    char cek, cek2;
    int sum = 0;
    for (int i = 0; i < l; i++)
    {
        scanf("%c%c", &cek, &cek2);
        getchar();
        if (cek2 == x)
        {
            sum += dominan(cek);
        }
        else
        {
            sum += ndominan(cek);
        }
    }
    printf("%d\n", sum);
}