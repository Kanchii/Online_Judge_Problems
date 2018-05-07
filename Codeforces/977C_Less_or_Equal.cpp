#include <bits/stdc++.h>

using namespace std;

#define INF (((1LL) << (31)) - 1)
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define PI 2 * acos(0.0)
#define MAX 1000100
#define MOD 1000000007
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define DEBUG(x) cout << #x << " = " << x << endl
#define endl '\n'

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

map<string, int> mapa;

int solve(vi &v, int k){

	int l = 1, r = 1e9;
	int mid;
	while(l <= r){
		int mid = (l + r) / 2;
		int cnt = 0;
		for(auto u : v){
			if(u <= mid) cnt++;
			else break;
		}
		if(cnt == k) return mid;
		else {
			if(cnt > k) r = mid - 1;
			else l = mid + 1;
		}
	}
	return -1;
}

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(false);
	
	int n, k;
	cin >> n >> k;
	vi v;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.emplace_back(x);
	}
	sort(v.begin(), v.end());
	cout << solve(v, k) << endl;

    return 0;
}
