#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char nama[1001];
    char nama2[1230];
    scanf("%s %s", nama, nama2);
    int len = strlen(nama);
    if (nama[len - 1] == 'x')
    {
        printf("%s%s\n", nama, nama2);
    }
    else if (nama[len - 1] == 'a' || nama[len - 1] == 'i' || nama[len - 1] == 'e' || nama[len - 1] == 'o' || nama[len - 1] == 'u')
    {
        nama[len- 1 ] = 'e';
        nama[len] = 'x';
        printf("%s",nama);
        printf("%s\n",nama2);
    }
    else
    {
        printf("%sex%s\n",nama,nama2);
    }
    
}