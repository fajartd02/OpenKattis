#include <bits/stdc++.h>

int main() {
	std::string name;
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> name;
	for(int i = 1 ; i <= 3; i++){
		std::cout << name;
		if(i != 3){
			std::cout <<" ";
		}
	}
	std::cout <<"\n";
}
