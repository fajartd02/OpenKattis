#include <iostream>
using namespace std;

int main()
{
    int gun[5];
    int ema[5];
    int sum = 0;
    int sum2 = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> gun[i];
        sum += gun[i];
    }
    for (int j = 0; j < 4; j++)
    {

        cin >> ema[j];
        sum2 += ema[j];
    }

    if (sum > sum2)
    {
        cout << "Gunnar" << endl;
    }
    else if (sum == sum2){
        cout << "Tie" << endl;
    }
    else {
        cout << "Emma" << endl;
    }

    return 0;
}