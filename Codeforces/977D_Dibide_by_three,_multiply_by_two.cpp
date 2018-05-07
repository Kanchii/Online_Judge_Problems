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

void topo(vvi &adj, int v, int *vis, stack<int> &s){
	vis[v] = 1;
	for(auto u : adj[v]){
		if(!vis[u]) topo(adj, u, vis, s);
	}
	s.push(v);
}

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vll v;
	for(int i = 0; i < n; i++){
		ll x;
		cin >> x;
		v.emplace_back(x);
	}
	
	vvi adj(n + 1);
	for(int i = 0; i < v.size(); i++){
		ll a = (v[i] % 3 == 0) ? (v[i] / 3) : -1;
		ll b = v[i] * 2;
		for(int j = 0; j < v.size(); j++){
			if(i == j) continue;
			if(v[j] == a or v[j] == b){
				adj[i].emplace_back(j);
			}
		}
	}

	stack<int> s;
	int vis[110];
	memset(vis, 0, sizeof vis);
	for(int i = 0; i < n; i++){
		if(!vis[i]) topo(adj, i, vis, s);
	}

	while(!s.empty()){
		cout << v[s.top()] << " ";
		s.pop();
	} cout << endl;

	return 0;
}
