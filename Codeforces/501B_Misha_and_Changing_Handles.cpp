#include <bits/stdc++.h>

using namespace std;

#define INF (1LL << 31 - 1)
#define LINF (1LL << 63 - 1)
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100
#define mp make_pair
#define pb push_back
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define DEBUG(x) cout << #x << " = " << x << endl
#define prtl(x) cout << x << endl;
#define prt(x) cout << x

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int id = 1;
map<string, int> mapa;
map<int, string> mapaB;
vvi adj(3000);

int DFS(int daVez){
    if(adj[daVez].empty()){
        return daVez;
    }
    return DFS(adj[daVez][0]);
}

int main(int argc, char const *argv[]){

    int q;
    cin >> q;
    vector<string> start;
    for(int i = 0; i < q; i++){
        string a, b;
        cin >> a >> b;
        int ida, idb;
        if(mapa[a] == 0){
            mapa[a] = id;
            mapaB[id++] = a;
            start.pb(a);
        }
        if(mapa[b] == 0){
            mapa[b] = id;
            mapaB[id++] = b;
        }
        ida = mapa[a]; idb = mapa[b];
        adj[ida].pb(idb);
    }

    sort(start.begin(), start.end());
    cout << (int)start.size() << endl;
    for(int i = 0; i < start.size(); i++){
        cout << start[i] << " " << mapaB[DFS(mapa[start[i]])] << endl;
    }

    return 0;
}
