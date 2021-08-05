#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int a;

    int i;
    for (i = 0; i < 10; i++)
    {
        cin >> a;
        if (a % 42 != 0)
        {
            count++;
        }
    }
    cout << count << endl;
    return
}