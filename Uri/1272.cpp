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
	cin.ignore();
	while(n--){
		string s;
		getline(cin, s);
		bool first = true;
		string res = "";
		for(char c : s){
			if(c != ' ' and first){
				first = false;
				res += c;
			} else if(c == ' '){
				first = true;
			}
		}
		cout << res << endl;
	}

    return 0;
}