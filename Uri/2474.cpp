#include <bits/stdc++.h>

using namespace std;

#define INF (1 << 30)
#define LINF (1LL << 63)
#define SWAP(a,b) ((a) ^= (b) ^= (a) ^= (b))
#define MAX 1000010

typedef long long ll;

//template <typename T>
ll isPrime(ll x){
	ll k = floor(sqrt(x));
	for(ll i = 2; i <= k; i++){
		if(x % i == 0){
			return 0;
		}
	}
	return 1;
}

bitset<MAX> p;

void crivo(){
	p.set();
	p[0] = p[1] = 0;
	for(ll i = 4; i < MAX; i += 2){
		p[i] = 0;
	}
	for(ll i = 3; i < MAX; i += 2){
		if(p[i]){
			for(ll j = i * i; j < MAX; j += i){
				p[j] = 0;
			}
		}
	}
}

int main() {
	crivo();
	ll x;
	while(scanf("%lld", &x) != EOF){
		if(x < MAX){
			if(p[x]){
				printf("%lld\n", x - 1);
			} else if(x % 2 == 0){
				printf("%lld\n", x - 2);
			} else {
				if(p[x - 2]){
					printf("%lld\n", x - 2);
				} else {
					printf("%lld\n", x - 3);
				}
			}
		} else {
			if(isPrime(x)){
				printf("%lld\n", x - 1);
			} else if(x % 2 == 0){
				printf("%lld\n", x - 2);
			} else {
				if(isPrime(x - 2)){
					printf("%lld\n", x - 2);
				} else {
					printf("%lld\n", x - 3);
				}
			}
		}
	}

    return 0;
}