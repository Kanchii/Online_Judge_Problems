#include <bits/stdc++.h>

using namespace std;

#define INF (1 << 30)
#define LINF (1LL << 63)
#define BIT(x) (1LL << (x))

typedef long long ll;
typedef unsigned long long ull;

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
	cin >> n;
	while(n--){
		int k;
		cin >> k;
		int tot = 0;
		int vet[k + 1];
		for(int i = 0; i < k; i++){
			cin >> vet[i];
			tot += vet[i];
		}
		double res = tot / (double)k;
		tot = 0;
		for(int i = 0; i < k; i++){
			if(vet[i] > res){
				tot++;
			}
		}
		res = tot / (double)k;
		printf("%.3f%%\n", res * 100.0);
	}

    return 0;
}