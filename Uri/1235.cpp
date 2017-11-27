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
	cin >> n;
	cin.ignore();
	while(n--){
		string s;
		getline(cin, s);
		int c;
		if(s.size() % 2 == 0){
			c = s.size() / 2 - 1;
		} else {
			c = (int)(s.size() / 2.0);
		}
		int k = c;
		for(; c >= 0; c--){
			cout << s[c];
		}
		for(c = s.size() - 1; c > k; c--){
			cout << s[c];
		}
		cout << endl;
	}

    return 0;
}