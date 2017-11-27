#include <bits/stdc++.h>

using namespace std;

#define INF (1 << 30)
#define LINF (1LL << 63)
#define SWAP(a,b) ((a) ^= (b) ^= (a) ^= (b))

typedef long long ll;

template <typename T>
int isPrime(T x){
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
	cin >> n;
	vector<int> p, i;
	while(n--){
		int x;
		cin >> x;
		if(x % 2 == 0){
			p.push_back(x);
		} else {
			i.push_back(x);
		}
	}

	sort(p.begin(), p.end());
	sort(i.rbegin(), i.rend());
	for(int x : p){
		cout << x << endl;
	}
	for(int x : i){
		cout << x << endl;
	}

    return 0;
}