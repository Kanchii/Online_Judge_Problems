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
	int f = 0;
	for(char c : s){
		if(c == 'Q' or c == 'H' or c == '9'){
			f = 1;
			break;
		}
	}
	if(f){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}