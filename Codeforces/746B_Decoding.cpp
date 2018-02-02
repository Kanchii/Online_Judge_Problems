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


int main(int argc, char const *argv[]){

	int n;
	cin >> n;
	string s;
	cin >> s;
	string res = "";
	int dir = 1;
	if(n % 2 == 0){
		dir = 0;
	}
	for(int i = 0; i < s.size(); i++){
		if(!dir){
			res = s[i] + res;
		} else {
			res = res + s[i];
		}
		dir = !dir;
	}
	cout << res << endl;
} 