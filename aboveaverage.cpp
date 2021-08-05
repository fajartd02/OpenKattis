#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int nn;
        cin >> nn;
        double arr[nn];
        double sum = 0;
        float bagi = 0;
        for (int k = 0; k < nn; k++)
        {
            cin >> arr[k];
            sum += arr[k];
            bagi++;
        }
        double average = sum / nn;
        float count = 0;
        for (int k = 0; k < nn; k++)
        {
            if (arr[k] > average)
            {
                count++;
            }
        }
        float hasil = count / bagi * 100;
        char x = '%';
        printf("%.3lf%c\n", hasil, x);
    }
}