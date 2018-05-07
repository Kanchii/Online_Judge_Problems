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

typedef long long ll;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;

int DFS(vvi &adj, int v, int ant, int *vis){
	vis[v] = 1;
	if(adj[v].size() != 2){
		vis[v] = 2;
		return 0;
	}
	int r = 0;
	for(auto u : adj[v]){
		if(u != ant){
			if(vis[u] == 2) continue;
			else if(vis[u] == 1) r = 1;
			else {
				r = DFS(adj, u, v, vis);
			}
		}
	}

	vis[v] = 2;
	return r;	
}

int main(){
	ios_base::sync_with_stdio(false);
	
	int n, m;
	cin >> n >> m;
	vvi adj(n + 5);
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].emplace_back(y);
		adj[y].emplace_back(x);
	}
	
	int vis[200100];
	memset(vis, 0, sizeof vis);
	int r = 0;
	for(int i = 1; i <= n; i++){
		r += DFS(adj, i, 0, vis);
	}
	cout << r << endl;
	return 0;
}
