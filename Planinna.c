#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    scanf("%d", &x);
    int h = pow(2, x) + 1;
    printf("%d\n", h * h);

    return 0;
}