#include <bits/stdc++.h>

#define INF (1 << 30)
#define LINF (1LL << 63)

using namespace std;
 
int main() {
 	
	int n;
	cin >> n;
	while(n--){
		string a, b;
		cin >> a >> b;
		string res = "";
		int i = 0, j = 0;
		while(i < a.size() and j < b.size()){
			res += a[i++];
			res += b[j++];
		}
		while(i < a.size()){
			res += a[i++];
		}
		while(j < b.size()){
			res += b[j++];
		}
		cout << res << endl;
	}

    return 0;
}