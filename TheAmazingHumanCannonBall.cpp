<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char x[1001];
    char y[1001];
    scanf("%s", x);
    scanf("%s", y);
    int len = strlen(x);
    int same = 0, dif = 0;
    for (int i = 0; i < len; i++)
    {
        if (x[i] == y[i])
        {
            same++;
        }
        else
        {
            dif++;
        }
    }
    int count = 0;
    if (n > same)
    {
        count += len - (n - same);
    }
    else
    {
        count += n + dif;
    }
    printf("%d\n", count);
}
=======
#include <iostream>
using namespace std;

int main()
{
    int kasus;
    cin >> kasus;
    
}
>>>>>>> 779fbb5 (Sisa2 belom dipush dude)
