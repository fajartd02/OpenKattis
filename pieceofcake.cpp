#include <iostream>
using namespace std;

struct
{
    int a, b, c;
} panjang;

int main()
{
    cin >> panjang.a >> panjang.b >> panjang.c;
    int z, x;
    z = max(panjang.a - panjang.b, panjang.b);
    x = max(panjang.a - panjang.c, panjang.c);
    int hasil = z * x;

    cout << hasil * 4 << endl;
    return 0;
}