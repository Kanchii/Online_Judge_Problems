#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define LINF (1LL << 63)
#define SWAP(a,b) ((a) ^= (b) ^= (a) ^= (b))
#define MAX 1000010

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

vvii adj;
int n, m;

int dp[105][105][105];

int dijk(int s, int d, int k){
	priority_queue<ii, vector<ii>, greater<ii> > fila;
	int dist[n + 1];
	memset(dist, INF, sizeof dist);
	dist[s] = 0;
	fila.push(ii(0, s));
	while(!fila.empty()){
		ii data = fila.top();
		fila.pop();
		int v = data.second;
		int dd = data.first;
		if(v == d){
			return dd;
		}
		for(ii u : adj[v]){
			if(u.first != d and u.first <= k){
				int ad = dd + u.second;
				if(dist[u.first] > ad){
					dist[u.first] = ad;
					fila.push(ii(ad, u.first));
				}
			} else {
				if(u.first == d){
					int ad = dd + u.second;
					if(dist[u.first] > ad){
						dist[u.first] = ad;
						fila.push(ii(ad, u.first));
					}
				}
			}
		}
	}
	return -1;
}

int main() {
	while(cin >> n >> m){

		adj.assign(n + 5, vii());

		for(int i = 0; i < 105; i++){
			memset(dp[i], -1, sizeof dp[i]);
		}

		for(int i = 0; i < m; i++){
			int x, y, w;
			cin >> x >> y >> w;
			x--; y--;
			adj[x].emplace_back(y, w);
			adj[y].emplace_back(x, w);
		}
		int k;
		cin >> k;
		while(k--){
			int a, b, c;
			cin >> a >> b >> c;
			a--; b--; c--;
			if(dp[a][b][c] != -1) cout << dp[a][b][c] << endl;
			else {
				dp[a][b][c] = dijk(a, b, c);
				cout << dp[a][b][c] << endl;
			}
		}
	}

    return 0;
}
