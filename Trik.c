#include <stdio.h>
#include <string.h>

int main()
{
    char nama[51];
    gets(nama);
    int y = strlen(nama) - 1;
    char x = nama[y];

    if (x == 'A')
    {
        printf("2\n");
    }
    else if (x == 'B')
    {
        printf("3\n");
    }
    else if (x == 'C')
    {
        printf("1\n");
    }

    return 0;
}