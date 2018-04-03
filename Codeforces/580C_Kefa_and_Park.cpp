#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAXN 100005
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

int n, k;
vvi adj;
int cat[MAXN];

int isLeaf(int u, int *vis){

    if(adj[u].size() == 1 and vis[adj[u][0]]){
        return 1;
    }
    return 0;

}

int solve(){
    queue<ii> fila;
    fila.pu(ii(0, cat[0]));
    int vis[n + 1];
    memset(vis, 0, sizeof vis);
    vis[0] = 1;
    int res = 0;
    while(!fila.empty()){
        ii daVez = fila.front();
        fila.pop();
        int u = daVez.fst;
        int d = daVez.snd;
        if(d > k){
            continue;
        }
        if(isLeaf(u, vis)){
            res++;
            continue;
        }
        for(int v : adj[u]){
            if(!vis[v]){
                vis[v] = 1;
                fila.pu(ii(v, (!cat[v] ? 0 : d + cat[v])));
            }
        }
    }
    return res;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin >> n >> k;

    adj.assign(n + 5, vi());
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        cat[i] = x;
    }
    for(int i = 0; i < n - 1; i++){
        int x, y;
        cin >> x >> y;
        x--; y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    cout << solve() << endl;

    return 0;
}
