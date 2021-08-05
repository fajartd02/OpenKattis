#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int cek1 = y - x;
    int cek2 = z - y;
    if (cek1 > cek2)
    {
        cout << cek1 - 1 << endl;
    }
    else
    {
        cout << cek2 - 1 << endl;
    }
    
}