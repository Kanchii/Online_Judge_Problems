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
	string s = "hello";
	string ss;
	cin >> ss;
	int pos = 0;
	for(int i = 0; i < ss.size(); i++){
		if(ss[i] == s[pos]){
			pos++;
			if(pos == 5){
				break;
			}
		}
	}
	if(pos == 5){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}