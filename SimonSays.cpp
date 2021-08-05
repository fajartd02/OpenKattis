
#include <string.h>
#include <stdio.h>

int main()
{
    int kasus;
    scanf("%d", &kasus);
    char nama[101];

    int i, j;
    for (i = 0; i < kasus + 1; i++)
    {
        gets(nama);
        int x = strlen(nama);
        if (nama[0] == 'S' && nama[1] == 'i' && nama[2] == 'm' && nama[3] == 'o' && nama[4] == 'n' && nama[5] == ' ' && nama[6] == 's' && nama[7] == 'a' && nama[8] == 'y' && nama[9] == 's')
        {
            for (j = 11; j <= x; j++)
            {
                printf("%c", nama[j]);
            }
            printf("\n");
        }
    }
    return 0;
}