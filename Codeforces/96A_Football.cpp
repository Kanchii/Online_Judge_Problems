#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){
	
	string s;
	cin >> s;
	int cont = 1;
	int f = 0;
	for(int i = 1; i < s.size(); i++){
		if(s[i] == s[i - 1]){
			cont++;
		} else {
			cont = 1;
		}
		if(cont >= 7){
			f = true;
			break;
		}
	}
	if(cont >= 7){
		f = true;
	}
	if(f){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}