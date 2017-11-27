#include <bits/stdc++.h>

using namespace std;

#define INF (1 << 30)
#define LINF (1LL << 63)
#define BIT(x) (1LL << (x))
#define pb(x) push_back((x))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;

template <typename T>
int prime(T x){
	T k = floor(sqrt(x));
	for(T i = 2; i <= k; i++){
		if(x % i == 0){
			return 0;
		}
	}
	return 1;
}

int main() {

	int n;
	while(cin >> n and n){
		string s;
		cin >> s;
		char dir = 'N';
		for(char c : s){
			if(c == 'D'){
				if(dir == 'N'){
					dir = 'L';
				} else if(dir == 'L'){
					dir = 'S';
				} else if(dir == 'S'){
					dir = 'O';
				} else {
					dir = 'N';
				}
			} else if(c == 'E'){
				if(dir == 'N'){
					dir = 'O';
				} else if(dir == 'O'){
					dir = 'S';
				} else if(dir == 'S'){
					dir = 'L';
				} else {
					dir = 'N';
				}
			}
		}
		cout << dir << endl;
	}

    return 0;
}