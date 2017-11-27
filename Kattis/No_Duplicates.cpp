#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

map<string, int> mapa;

int main(int argc, char const *argv[]){

	string s;
	int f = 1;
	while(cin >> s){
		if(mapa.count(s) != 0){
			f = 0;
		} else {
			mapa[s] = 1;
		}
	}
	printf("%s\n", (f ? "yes" : "no"));
	return 0;
}