#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(int argc, char const *argv[]){
	string s;
	cin >> s;
	int f = 0;
	for(int i = 0; i < s.size() - 1; i++){
		if(s[i] == 's' and s[i + 1] == 's'){
			f = 1;
			break;
		}
	}
	printf("%s\n", (f ? "hiss" : "no hiss"));

	return 0;
}