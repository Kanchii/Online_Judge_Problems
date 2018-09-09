#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string.h>

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

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int n, m, k;
    cin >> n >> m >> k;
    vvii adj(n + 1);
    for(int i = 0; i < m; i++){
        int x, y, w;
        cin >> x >> y >> w;
        x--; y--;
        adj[x].emplace_back(y, w);
        adj[y].emplace_back(x, w);
    }

    int depot[n + 1];
    memset(depot, 0, sizeof depot);
    vi v;
    for(int i = 0; i < k; i++){
        int x;
        cin >> x;
        x--;
        v.emplace_back(x);
        depot[x] = 1;
    }

    int r = INF;

    for(int u : v){
        int aux = INF;
        for(ii p : adj[u]){
            if(!depot[p.fst]){
                aux = min(aux, p.snd);
            }
        }
        r = min(r, aux);
    }
    cout << (r == INF ? -1 : r) << endl;

    return 0;
}
