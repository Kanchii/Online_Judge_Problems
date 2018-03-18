#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
int vis[300005], dp[300005];
vvi adj;
vvi adjR;
string s;

int solve(int u, char c){
    if(dp[u] != -1)
        return dp[u];
    int res = 0;
    for(int v : adj[u])
        res = max(res, solve(v, c));
    return dp[u] = res + (s[u] == c);
}

int comp(int u){
    vis[u] = 1;
    for(int v : adjR[u]){
        if(vis[v] == 1){
            return 1;
        }
        else if(vis[v] == 0)
            return 1;
    }
    vis[u] = 2;
    return 0;
}

void topo(int u, vi &p){
    vis[u]= 1;
    for(int v : adj[u]){
        if(!vis[v]){
            topo(v, p);
        }
    }
    p.push_back(u);
}

int main(){
    ios_base::sync_with_stdio(false);
    int n, m; cin >> n >> m;
    adj.assign(n+5, vi());
    adjR.assign(n + 5, vi());
    cin >> s;
    s = "!" + s;
    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adjR[v].push_back(u);
        //cout << u << " -> " << v << endl;
    }

    vi p;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            topo(i, p);
        }
    }
    memset(vis, 0, sizeof(vis));
    reverse(p.begin(), p.end());
    int flag = 0;
    for(int u : p){
        if(!vis[u]){
            if(comp(u)){
                flag = 1;
                break;
            }
        }
    }

    if(flag){
        cout << -1 << endl;
    } else {
        int res = 0;

        for(char c = 'a'; c <= 'z'; c++){
            memset(dp, -1, sizeof dp);
            for(int i = 1; i <= n; i++)
                res = max(res, solve(i, c));

        }

        cout << res << endl;
    }
    return 0;
}
