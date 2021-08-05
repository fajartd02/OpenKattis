#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int temp, total, x, kiri, kanan;
    if (a == 0)
    {
        a = 24;
        temp = a * 60;
        total = temp + b;
        x = total - 45;
        kiri = x / 60;
        kanan = x % 60;
    }
    else
    {
        temp = a * 60;
        total = temp + b;
        x = total - 45;
        kiri = x / 60;
        kanan = x % 60;
    }

    cout << kiri << " " << kanan << endl;
    return 0;
}