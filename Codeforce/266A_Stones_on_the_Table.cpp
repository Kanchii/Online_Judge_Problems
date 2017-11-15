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

	int n;
	cin >> n;
	string s;
	cin >> s;
	int c = 1;
	int r = 0;
	for(int i = 1; i < s.size(); i++){
		if(s[i] == s[i - 1]){
			c++;
		} else {
			r += c - 1;
			c = 1;
		}
	}
	r += c - 1;
	cout << r << endl;

	return 0;
}