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

	string s;
	int d;
	int tot = 0;
	int cnt = 0;
	while(getline(cin, s)){
		cin >> d;
		cin.ignore();
		tot += d;
		cnt++;
	}
	printf("%.1f\n", tot / (double)cnt);

    return 0;
}