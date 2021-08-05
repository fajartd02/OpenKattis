#include <iostream>
using namespace std;

int main()
{
    int angka;
    int angka2;
    while (1)
    {
        cin >> angka >> angka2;
        int cek = angka2;

        if (angka == 0 && angka2 == 0)
        {
            break;
        }

        cout << angka / angka2 << " " << angka % angka2;
        cout << " "
             << "/"
             << " " << cek<< endl;
    }

    return 0;
}