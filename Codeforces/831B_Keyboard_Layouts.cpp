#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

map<char, char> mapa;

int main(int argc, char const *argv[]){
	string a, b;
	cin >> a >> b;
	string s;
	cin >> s;
	for(int i = 0; i < a.size(); i++){
		mapa[(char)a[i]] = (char)b[i];
	}
	for(char c = '0'; c <= '9'; c++){
		mapa[c] = c;
	}
	for(int i = 0; i < s.size(); i++){
		char aux = (char)tolower(s[i]);
		char c = mapa[aux];
		if(isupper(s[i])){
			cout << (char)toupper(c);
		} else {
			cout << c;
		}
	} cout << endl;
} 