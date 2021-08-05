#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int angka;
        cin >> angka;
        int arr[angka];
        for (int i = 0; i < angka; i++)
        {
            cin >> arr[i];
        }
        int min = arr[0];
        int max = arr[0];
        for (int j = 0; j < angka; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
            }
            if (max < arr[j])
                max = arr[j];
        }
        int hasil = (max - min) * 2;
        cout << hasil << endl;
    }
}