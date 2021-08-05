#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{

    char name[101];
    scanf("%[^\n]", name);
    fflush(stdin);
    strlen(name);
    int i = 0;
    while (i < strlen(name))
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'u' || name[i] == 'o')
        {
            printf("%c",name[i]);
            i += 3;
        }
        else
        {
            printf("%c", name[i]);
            i += 1;
        }
    }
    printf("\n");
}