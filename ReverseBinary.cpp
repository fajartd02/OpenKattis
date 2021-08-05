#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string bin;
    int k = 0;
    while (T > 0)
    {
        bin += to_string(T % 2);
        T /= 2;
        k++;
    }

    int hasil = stoi(bin, 0, 2);

    cout << hasil << endl;
}