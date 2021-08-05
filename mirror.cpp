#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);
    fflush(stdin);
    for (int kk = 1; kk <= n; kk++)
    {

        int x, y;
        scanf("%d %d", &x, &y);
        fflush(stdin);
        char arr[x + 1][y + 1];

        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= y; j++)
            {
                scanf("%c", &arr[i][j]);
            }
            getchar();
        }

        printf("Test %d\n", kk);
        for (int i = x; i >= 1; i--)
        {
            for (int j = y; j >= 1; j--)
            {
                printf("%c", arr[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}