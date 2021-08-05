#include <iostream>
using namespace std;
int sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        int p = 11;
        while (sum(p * n) != sum(n))
        {
            p++;
        }
        cout << p << "\n";
    }
    return 0;
}