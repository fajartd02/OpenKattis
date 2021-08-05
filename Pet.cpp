#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;
    int hasila = 0;
    int hasilb = 0;
    int hasilc = 0;
    int hasild = 0;
    int hasile = 0;
    int i,j,k,l,m;

    for ( i = 1; i <= 4; i++)
    {
        cin >> a;
        hasila += a;
    }

    for ( j = 1; j <= 4; j++)
    {
        cin >> b;
        hasilb += b;
    }

    for ( k = 1; k <= 4; k++)
    {
        cin >> c;
        hasilc += c;
    }

    for ( l = 1; l<= 4; l++)
    {
        cin >> d;
        hasild += d;
    }

    for ( m = 1; m <= 4; m++)
    {
        cin >> e;
        hasile += e;
    }

    if (hasila > hasilb && hasila > hasilc && hasila > hasild && hasila > hasile)
    {
        cout << 1 << " " << hasila << endl;
    }
    else if (hasilb > hasila && hasilb > hasilc && hasilb > hasild && hasilb > hasile)
    {
        cout << 2 << " " << hasilb << endl;
    }

    else if (hasilc > hasilb && hasilc > hasila && hasilc > hasild && hasilc > hasile)
    {
        cout << 3 << " " << hasilc << endl;
    }
    else if (hasild > hasilb && hasild > hasilc && hasild > hasila && hasild > hasile)
    {
        cout << 4 << " " << hasild << endl;
    }
    else if (hasile > hasilb && hasile > hasilc && hasile > hasild && hasile > hasila)
    {
        cout << 5 << " " << hasile << endl;
    }
    return 0;
}