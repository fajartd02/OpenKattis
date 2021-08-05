#include <string.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int kasus;
    cin >> kasus;
    char A[100];
    int x = 0;
    int y = 0;
    for (int i = 0; i < kasus; i++)
    {
        scanf("%s", A);
        if ((A[0] == 'p' || A[0] == 'P') && (A[1] == 'i' || A[1] == 'I') && (A[2] == 'n' || A[2] == 'N') && (A[3] == 'k' || A[3] == 'K'))
        {
            x += 1;
        }
        else
        {
            y += 1;
        }
        if ((A[0] == 'r' || A[0] == 'R') && (A[1] == 'o' || A[1] == 'O') && (A[2] == 's' || A[2] == 'S') && (A[3] == 'e' || A[3] == 'E'))
        {
            x += 1;
        }
        else
        {
            y += 1;
        }
    }
    if (x == 0)
    {
        cout << "I must watch Star Wars with my daughter" << endl;
    }
    else
    {
        cout << y << endl;
    }
}