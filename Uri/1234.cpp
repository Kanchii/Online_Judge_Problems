#include <bits/stdc++.h>

#define INF (1 << 30)
#define LINF (1LL << 63)

using namespace std;

int main() {

	string s;
	while(getline(cin, s)){
		bool u = true;
		for(char c : s){
			if((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z')){
				if(u){
					cout << (char)toupper(c);
					u = !u;
				} else {
					cout << (char)tolower(c);
					u = !u;
				}
			} else {
				cout << c;
			}
		} cout << endl;
	}

    return 0;
}