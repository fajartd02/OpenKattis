#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    int i;
    char x[1000];
    for (i = 0; i < a; i++)
    {
        scanf("%s", x);
    }

    printf("%d", b);
}