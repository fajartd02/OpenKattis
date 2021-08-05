#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float N;
    cin >> N;
    int T;
    cin >> T;
    float count = 0 ;
    while(T--)
    {
        float a,b;
        cin >> a >> b;
        float total = a * b * N;
        count+= total;
    }
    printf("%.8f\n",count);
}