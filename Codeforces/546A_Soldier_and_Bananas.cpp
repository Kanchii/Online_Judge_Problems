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

int main(int argc, char const *argv[]){
	int k, n, w;
	cin >> k >> n >> w;
	ll tot = 0;
	for(int i = 1; i <= w; i++){
		tot += i * k;
	}

	cout << max(0, tot - n) << endl;

	return 0;
}