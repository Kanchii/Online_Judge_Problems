#include <bits/stdc++.h>

using namespace std;

#define INF (1 << 30)
#define LINF (1LL << 63)

typedef long long ll;

int prime(ll x){
	ll k = floor(sqrt(x));
	for(int i = 2; i <= k; i++){
		if(x % i == 0){
			return 0;
		}
	}
	return 1;
}

int main() {

	int n;
	cin >> n;
	while(n--){
		ll x;
		cin >> x;
		if(prime(x)){
			cout << "Prime" << endl;
		} else {
			cout << "Not Prime" << endl;
		}
	}

    return 0;
}