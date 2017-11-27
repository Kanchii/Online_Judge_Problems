#include <bits/stdc++.h>

#define INF (1 << 30)
#define LINF (1LL << 63)

using namespace std;
 
int main() {
 	
	int a, b, c;
	while(cin >> a >> b >> c){
		if(a != b and a != c){
			cout << "A" << endl;
		} else if(b != a and b != c){
			cout << "B" << endl;
		} else if(c != a and c != b){
			cout << "C" << endl;
		} else {
			cout << "*" << endl;
		}
	}

    return 0;
}