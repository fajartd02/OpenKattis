#include <iostream>
using namespace std;

int main()
{
    int kasus;
    cin >> kasus;

    int i;
    float a, b, c;
    for (i = 0; i < kasus; i++)
    {
        cin >> a >> b >> c;

        if (a + b == c || a - b == c || b - a == c || a * b == c || a / b == c || b / a == c)
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    return 0; 
}