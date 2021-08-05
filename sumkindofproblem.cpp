#include <iostream>
using namespace std;

int s1(int n)
{
    int total = 0;
    for (int i = 0; i <= n; i++)
    {
        total += i;
    }
    return total;
}

int s2(int n)
{
    int total = 0;
    for (int i = 1; i < n * 2; i += 2)
    {
        total += i;
    }
    return total;
}

int s3(int n)
{
    int total = 0;
    for(int i = 0 ; i < (n * 2) + 1 ; i += 2)
    {
        total += i;
    }

    return total;
}

int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        int num, angka;
        cin >> num >> angka;
        cout << num << " " << s1(angka) << " " << s2(angka) << " " << s3(angka) << endl;
    }
}