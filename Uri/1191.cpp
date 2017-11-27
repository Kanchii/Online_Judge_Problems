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
	while(n--){
		string s;
		cin >> s;
		int f = (s[0] - '0');
		int sec = (s[2] - '0');
		if(f == sec){
			cout << f * sec << endl;
		} else {
			if(islower(s[1])){
				cout << f + sec << endl;
			} else {
				cout << sec - f << endl;
			}
		}
	}

    return 0;
}