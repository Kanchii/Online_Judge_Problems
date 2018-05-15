#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, n;
	while(cin >> a >> b >> n){
		while(n--){
			int x, y;
			cin >> x >> y;
			if((x <= a and y <= b) or (x <= b and y <= a)) cout << "Sim" << endl;
			else cout << "Nao" << endl;
		}	
	}

	return 0;
}
