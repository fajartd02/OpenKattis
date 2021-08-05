
#include <stdio.h>
#include <string.h>


int main()
{
    char nama[100];
    gets(nama);
    int a = strlen(nama);
    int i;
    for (i = 0; i < a; i++)
    {
        if (nama[i] >= 'A' && nama[i] <= 'Z')
        {
            printf("%c", nama[i]);
        }
    }
    printf("\n");

    return 0;
}