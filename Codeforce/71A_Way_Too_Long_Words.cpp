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
	while(n--){
		string x;
		cin >> x;
		if(x.size() > 10){
			cout << x[0] << x.size() - 2 << x[x.size() - 1] << endl;
		} else {
			cout << x << endl;
		}
	}

	return 0;
}