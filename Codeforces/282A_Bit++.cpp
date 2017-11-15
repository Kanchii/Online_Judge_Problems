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
	
	int r = 0;
	int n;
	cin >> n;
	int f = 0;
	int x = 0;
	while(n--){
		if(f){
			r += x;
			f = 0;
		}
		string s;
		cin >> s;
		if(s[0] == '+' or s[1] == '+'){
			r++;
		} else {
			r--;
		}
	}
	cout << r << endl;

	return 0;
}