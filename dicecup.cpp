#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int i;
    int x = a + 1;
    int y = b + 1;
    if (a > b)
    {
        for (i = y; i < a + 2; i++)
        {
            cout << i << endl;
        }
    }
    else if (a < b)
    {
        for (i = x; i < b + 2; i++)
        {
            cout << i << endl;
        }   
    }
    else if (a == b)
    {
        a++;
        cout << a << endl;
    }

    return 0;
}