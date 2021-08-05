#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    int kasus;
    scanf("%d", &kasus);
    int i;
    char angka[1001];
    for (i = 0; i < kasus; i++)
    {
        scanf("%s", angka);
        cout << strlen(angka) << endl;
    }

    return 0;
}