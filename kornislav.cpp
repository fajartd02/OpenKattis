<<<<<<< HEAD
#include <algorithm>
#include <iostream>
#include <vector>
=======
#include <iostream>
>>>>>>> 779fbb5 (Sisa2 belom dipush dude)

using namespace std;

int main()
{
<<<<<<< HEAD
    vector<int> v;
    v.resize(4);
    cin >> v[0] >> v[1] >> v[2] >> v[3];

    sort(v.begin(), v.end());

    cout << v[0] * v[2] << endl;
}
=======
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int z = max(a, b);
    int x = max(c, d);
    int t = min(a, b);
    int y = min(c, d);
    int maxx = max(z, x);
    int minn = min(t, y);

    int hasil = maxx * minn;
    cout << hasil << endl;
    return 0;
}
>>>>>>> 779fbb5 (Sisa2 belom dipush dude)
