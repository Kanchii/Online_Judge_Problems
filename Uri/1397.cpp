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
		int a = 0, b = 0;
		while(n--){
			int x, y;
			cin >> x >> y;
			if(x > y){
				a++;
			} else if(x < y){
				b++;
			}
		}
	}

    return 0;
}