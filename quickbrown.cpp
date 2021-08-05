#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

struct data
{
    char alpa;
    bool valid;
} data[1001];

int main()
{

    int n;
    cin >> n;
    fflush(stdin);
    for (int j = 0; j < n; j++)
    {
        int x = 97;

        for (int i = 0; i < 26; i++)
        {
            data[i].alpa = x;
            data[i].valid = true;
            x++;
        }
        char name[1001];
        scanf("%[^\n]", name);
        fflush(stdin);

        int y = 0;
        for (int k = 0; k < strlen(name); k++)
        {

            for (int kk = 0; kk < 27; kk++)
            {
                if (tolower(name[k]) == data[kk].alpa)
                {
                    data[kk].alpa = false;
                    break;
                }
                else
                {
                    y++;
                }
            }
        }

        if (y == 0)
        {
            printf("pangram\n");
        }
        else
        {
            char print[26];
            int yy = 0;
            printf("missing ");
            for (int z = 0; z < 27; z++)
            {
                if (data[z].valid == true)
                {
                    print[yy] = data[z].alpa;
                    yy++;
                }
            }
            for(int kkk = 0 ; ; kkk < yy; kkk++)
            {
                printf("%c",print[kkk]);
            }
            printf("\n");
        }
    }

    return 0;
}