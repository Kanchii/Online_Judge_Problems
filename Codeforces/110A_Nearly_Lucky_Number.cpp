#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

bool solve(int c){

	string s = to_string(c);
	for(char c : s){
		if(c != '4' and c != '7'){
			return false;
		}
	}
	return true;
}

int main(int argc, char const *argv[]){
	
	string s;
	cin >> s;
	int c = 0;
	for(char x : s){
		if(x == '4' or x == '7'){
			c++;
		}
	}

	if(solve(c)){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}