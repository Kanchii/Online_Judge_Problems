#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string firstH(string s){
	string res = "";
	for(int i = 0; i < s.size() / 2; i++){
		res += s[i];
	}
	return res;
}

string secondH(string s){
	string res = "";
	for(int i = s.size() / 2; i < s.size(); i++){
		res += s[i];
	}
	return res;
}

char forward(char c, int v){
	v %= (int)('Z' - 'A' + 1);
	for(int i = 0; i < v; i++){
		c++;
		if(c > 'Z'){
			c = 'A';
		}
	}
	return c;
}

string rot(string s){
	int v = 0;
	for(char c : s){
		v += (c - 'A');
	}
	string res = "";
	for(char c : s){
		res += forward(c, v);
	}
	return res;
}

string solve(string a, string b){

	string res = "";
	for(int i = 0; i < a.size(); i++){
		int v = b[i] - 'A';
		res += forward(a[i], v);
	}
	return res;

}

int main(int argc, char const *argv[]){

	string s;
	cin >> s;

	string a = firstH(s);
	string b = secondH(s);

	string l = rot(a);
	string r = rot(b);

	cout << solve(l, r) << endl;

	return 0;
}