#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAXN 1010
#define MOD 1000000007
#define pb push_back
#define pu push
#define DEBUG(x) cout << #x << " = " << x << endl
#define fst first
#define snd second

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;

typedef long long ll;
typedef unsigned long long ull;

int vis[1010];

void DFS(vvi &adj, int v){
    for(int u : adj[v]){
        if(!vis[u]){
            vis[u] = 1;
            DFS(adj, u);
        }
    }
}

vvi brands, adj;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    adj.assign(1010, vi());
    brands.assign(1010, vi());
    vii pares;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        x--; y--;
        pares.pb(ii(x, y));
        brands[x].pb(i);
    }
    int cnt = 0;
    for(ii p : pares){
        for(int u : brands[p.snd]){
            if(u != cnt){
                //cout << cnt << " -> " << u << endl;
                adj[cnt].pb(u);
            }
        }
        cnt++;
    }

    for(int i = 0; i < n; i++){
        if(!vis[i]){
            DFS(adj, i);
        }
    }

    int res = n;
    for(int i = 0; i < n; i++){
        if(vis[i]) res--;
    }
    cout << res << endl;

    return 0;
}
