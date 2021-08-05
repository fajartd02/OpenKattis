#include <iostream>
#include <map>
#include <string.h>
using namespace std;

int main()
{
    map<string, int> a;
    int nilai = 0, solved = 0;

    while (1)
    {
        int angka;
        cin >> angka;
        if (angka == -1)
        {
            break;
        }
        string cek, valid;
        cin >> cek >> valid;

        if (valid.compare("wrong") == 0)
        {
            a[cek] += 20;
        }
        else
        {
            solved += 1;
            nilai += angka + a[cek];
        }
        }
    cout << solved << " " << nilai << endl;
}