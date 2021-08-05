#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    string name;
    cin >> name;
    cout << name[0] << name[1] << name[2];
    for (int i = 3; i < name.length(); i++)
    {
        if (name[i] == name[0] && name[i+1] == name[1] && name[i+1] == name[2])
        {
            cout << endl;
            break;
        }
        else
        {
            cout << name[i];
        }
    }
}