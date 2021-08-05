#include <iostream>
using namespace std;

struct angka
{
    int hasil;
    int angka;
} nilai;

int main()
{
    int kasus;
    cin >> kasus;
    for (int i = 0; i < kasus; i++)
    {
        cin >> nilai.angka;
        if (nilai.angka < 0)
        {
            nilai.angka *= -1;
            nilai.hasil += nilai.angka;
        }
    }
    cout << nilai.hasil << endl;
    return 0;
}