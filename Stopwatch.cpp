#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0 ; i < n ; i ++){
		cin >> arr[i];
	}
	
	if(n % 2 == 1) {
		cout << "still running\n";
	}else {
		int ans = 0;
		for(int i = 0 ; i < n ; i++){
			if(i % 2 == 0) {
				ans += arr[i];
			}else{
				ans -= arr[i];
			}
		}
		cout << abs(ans) << "\n";
	}
}
