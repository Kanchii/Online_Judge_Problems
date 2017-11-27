#include <bits/stdc++.h>

#define INF (1 << 30)
#define LINF (1LL << 63)

using namespace std;
 
int main() {

	int n;
	cin >> n;
	while(n--){
		string a;
		cin >> a;
		if(a.size() > 3){
			cout << 3 << endl;
		} else {
			if((a[0] == 'o' and a[1] == 'n') or (a[0] == 'o' and a[2] == 'e') or (a[1] == 'n' and a[2] == 'e')){
				cout << 1 << endl;
			} else {
				cout << 2 << endl;
			}
		}
	}

    return 0;
}