#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	map<int, int> mp;
	map<int, int> mp2;
	int temp, temp2;
	for(int i = 0; i < 3; i++) {
		cin >> temp >> temp2;
		mp[temp]++;
		mp2[temp2]++;
	}
	
	for(auto x: mp) {
        if(x.second == 1) cout << x.first;
	}
    cout << " ";

    for(auto x:mp2) {
        if(x.second == 1) cout << x.first << "\n";
    }
	
	return 0;
}
