#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    while (n--)
    {
        int angka;
        cin >> angka;
        if ((angka * angka) <= (a * a) + (b * b))
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NE" << endl;
        }
    }
}