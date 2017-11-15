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
	int n, m;
	cin >> n >> m;
	vi v;
	for(int i = 0; i < m; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());
	int mini = INF;
	for(int i = 0; i <= m - n; i++){
		mini = min(mini, v[i + n - 1] - v[i]);
	}
	cout << mini << endl;

	return 0;
}