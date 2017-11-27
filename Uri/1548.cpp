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
	cin >> n;
	while(n--){
		int k;
		cin >> k;
		vi a, b;
		for(int i = 0; i < k; i++){
			int x;
			 cin >> x;
			 a.pb(x);
			 b.pb(x);
		}
		sort(a.rbegin(), a.rend());
		int cnt = 0;
		for(int i = 0; i < a.size(); i++){
			if(a[i] == b[i]){
				cnt++;
			}
		}
		cout << cnt << endl;
	}

    return 0;
}