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

	string b;
	char a;
	while(cin >> a >> b and (a != '0' or b != "0")){
		string res = "";
		for(char c : b){
			if(c != a){
				if(c == '0' and res != ""){
					res += c;
				} else {
					if(c != '0'){
						res += c;
					}
				}
			}
		}
		if(res == ""){
			cout << 0 << endl;
		} else {
			cout << res << endl;
		}
	}

    return 0;
}