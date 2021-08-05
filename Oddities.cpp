#include <iostream>
using namespace std;

int main()
{

    int kasus;
    cin >> kasus;
    int i;
    int a;
    for (i = 0; i < kasus; i++)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            cout << a << " is even" << endl;
        }
        else
        {
            cout << a << " is odd" << endl;
        }
    }
    return 0;
}