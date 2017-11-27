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
	while(cin >> n and n){
		while(n--){
			int vet[5];
			int tot = 0;
			for(int i = 0; i < 5; i++){
				cin >> vet[i];
			}
			int pos = -1;
			for(int i = 0; i < 5; i++){
				if(vet[i] <= 127){
					if(pos != -1){
						pos = -1;
						break;
					}
					pos  = i;
				}
			}
			if(pos == -1){
				cout << "*" << endl;
			} else {
				cout << (char)('A' + pos) << endl;
			}
		}
	}

    return 0;
}