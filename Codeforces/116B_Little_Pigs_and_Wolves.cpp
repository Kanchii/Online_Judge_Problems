#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 100000
#define mp make_pair
#define pb push_back
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define fork(n) for(int k = 0; k < n; k++)
#define forsk(s, n) for(int k = s; k < n; k++)
#define DEBUG(x) cout << #x << " = " << x << endl
#define fst first
#define snd second

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

vvi adj;
int n, m;
int mx[234][234];
int custo[234][234];
int s = 0, t = 1;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int valid(int a, int b){
    return (a >= 0 and b >= 0 and a < n and b < m);
}

int DFS(int p, int *vis){
    if(p == t) return 1;
    vis[p] = 1;
    for(int v : adj[p]){
        if(!vis[v]){
            if(custo[p][v] and DFS(v, vis)){
                // cout << p << " -> " << v << " " << custo[p][v] << endl;
                custo[p][v]--;
                custo[v][p]++;
                // cout << p << " -> " << v << " " << custo[p][v] << endl;
                return 1;
            }
        }
    }
    return 0;
}

int fluxo(){
    int f = 0;
    int vis[234];
    memset(vis, 0, sizeof vis);
    while(DFS(s, vis)){
        f++;
        memset(vis, 0, sizeof vis);
    }
    return f;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    int idP = 105;
    int idW = 3;
    adj.assign(300, vi());
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char c;
            cin >> c;
            if(c == 'P'){
                mx[i][j] = idP++;
            } else if(c == 'W'){
                mx[i][j] = idW++;
            }
            // cout << mx[i][j] << " ";
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mx[i][j] > 0 and mx[i][j] <= 104){
                for(int k = 0; k < 4; k++){
                    int xx = i + dx[k];
                    int yy = j + dy[k];
                    if(valid(xx, yy) and mx[xx][yy] >= 105){
                        // cout << mx[i][j] << " -> " << mx[xx][yy] << endl;
                        adj[mx[i][j]].pb(mx[xx][yy]);
                        adj[mx[xx][yy]].pb(mx[i][j]);
                        custo[mx[i][j]][mx[xx][yy]] = 1;
                    }
                }
            }
        }
    }
    for(int i = 3; i < idW; i++){
        adj[s].pb(i);
        adj[i].pb(s);
        custo[s][i] = 1;
    }
    for(int i = 105; i < idP; i++){
        adj[i].pb(t);
        adj[t].pb(i);
        custo[i][t] = 1;
    }

    cout << fluxo() << endl;

    return 0;
}
