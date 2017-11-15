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
	
	int n, m;
	cin >> n >> m;
	int res = 0;
	res += m;
	int aux = floor(n / 2.0);
	res *= aux;
	n -= (2 * aux);
	if(n > 0){
		res += floor(m / 2.0);
	}
	cout << res << endl;


	return 0;
}