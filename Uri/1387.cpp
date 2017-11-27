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

	int a, b;
	while(cin >> a >> b and (a or b)){
		cout << a + b << endl;
	}

    return 0;
}