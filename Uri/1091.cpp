#include <bits/stdc++.h>

using namespace std;

#define INF (1 << 30)
#define LINF (1LL << 63)

typedef long long ll;

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
		int x, y;
		cin >> x >> y;
		for(int i = 0; i < n; i++){
			int a, b;
			cin >> a >> b;
			if(a == x or b == y){
				cout << "divisa" << endl;
			} else {
				if(a > x and b > y){
					cout << "NE" << endl;
				} else if(a > x and b < y){
					cout << "SE" << endl;
				} else if(a < x and b > y){
					cout << "NO" << endl;
				} else {
					cout << "SO" << endl;
				}
			}
		}
	}

    return 0;
}