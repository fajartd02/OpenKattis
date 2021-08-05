#include <iostream>

using namespace std;

int main()
{
    int k = 1;
    while (1)
    {
        int n;

        cin >> n;
        if (n == 0)
        {
            break;
        }
        string arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        cout << "SET " << k << endl;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                cout << arr[i] << endl;
            }
        }

        for (int i = n; i >= 1; i--)
        {
            if (i % 2 == 0)
            {
                cout << arr[i] << endl;
            }
        }
        k++;
    }
}