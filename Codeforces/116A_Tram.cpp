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
	int maxi = -1;
	cin >> n;
	int p = 0;
	while(n--){
		int a, b;
		cin >> a >> b;
		p -= a;
		p += b;
		maxi = max(maxi, p);
	}
	cout << maxi << endl;

	return 0;
}