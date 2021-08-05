#include <iostream>
using namespace std;

int main()
{
    int max;
    cin >> max;
    int kasus;
    cin >> kasus;
    int darah;

    int hasil = 0;
    int angka;
    int tambah = 0;

    int i;
    for (i = 0; i < kasus; i++)
    {
        cin >> angka;
        darah = max - angka;
        tambah += darah;
    }
    int total = tambah + max;

    cout << total << endl;

    return 0;
}