#include <bits/stdc++.h>

using namespace std;

int main(){
	
	vector<int> vet;


	string s;
	cin >> s;
	string t;
	cin >> t;
	int pos = 1;
	for(char c : t){
		if(c == s[pos - 1]) pos++;
	}
	
	cout << pos << endl;

	return 0;
}
