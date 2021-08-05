#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string name;
        getline(cin, name);
        if (name.find("simon says") == 0)
        {
            name.erase(0, 11);
            cout << name << endl;
        }
        else
        {
            cout << endl;
        }
        }
}