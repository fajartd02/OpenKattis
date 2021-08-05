#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float arr[n];
    float dec[n];
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] >> dec[i];
    }
    for (int j = 0; j  < n - 1; j++)
    {
        sum += ((dec[j] + dec[j + 1]) / 2) * (arr[j + 1] - arr[j]) / 1000;
    }
    printf("%.6f",sum);
}