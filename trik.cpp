#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    string ball;
    cin >> ball;

    char x[4] = "X  ";
    char temp;
    for (int i = 0; i < ball.length(); i++)
    {
        if (ball[i] == 'A')
        {
            temp = x[0];
            x[0] = x[1];
            x[1] = temp;
        }
        else if (ball[i] == 'B')
        {
            temp = x[1];
            x[1] = x[2];
            x[2] = temp;
        }
        else if (ball[i] == 'C')
        {
            temp = x[0];
            x[0] = x[2];
            x[2] = temp;
        }
    }

    if (x[0] == 'X')
    {
        cout << 1 << endl;
    }
    if (x[1] == 'X')
    {
        cout << 2 << endl;
    }
    if (x[2] == 'X')
        cout << 3 << endl;

    return 0;
}