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
	int r = 0;
	for(int i = 0; i < n; i++){
		int c = 0;
		for(int k = 0; k < 3; k++){
			int x;
			cin >> x;
			c += x;
		}
		if(c >= 2){
			r++;
		}
	}
	cout << r << endl;

	return 0;
}