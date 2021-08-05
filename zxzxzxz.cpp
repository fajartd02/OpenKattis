#include <iostream>
using namespace std;

int main()
{

    cin >> n;
    arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[1];
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int j = 1; j <= max; j++)
    {
        int valid = 0;
        for (int k = 1; k <= n; k++)
        {

            if (j == arr[k])
            {
                valid = 1;
                break;
            }
        }
        if (valid == 0)
        {
            cout << j << endl;
        }
    }
}
