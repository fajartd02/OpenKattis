
#include <stdio.h>
#include <string.h>

int main()
{
    char nama[1001];
    scanf("%s", &nama);

    int x;
    x = strlen(nama);
    int y = 0;

    int i;
    for (i = 0; i < x; i++)
    {
        printf("%c", nama[i]);
        if (nama[i] == 'e')
        {
            printf("e");
        }
    }
    printf("\n");
}