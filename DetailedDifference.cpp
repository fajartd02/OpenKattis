#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    int kasus;
    cin >> kasus;
    char x[51];
    char y[51];
    int i, j;
    int z;
    for (i = 0; i < kasus; i++)
    {
        cin >> x;
        cin >> y;
        z = strlen(x);
        cout << x << endl;
        cout << y << endl;
        for (j = 0; j < z; j++)
        {
            if (x[j] == y[j])
            {
                cout << ".";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
        cout << endl;
    }

    return 0;
}