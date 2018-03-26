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

vector<int> golpes, cabecas;

int solve(){
    queue<ii> fila;
    fila.push(ii(100, 0));
    vector<int> vis(1005, 0);
    vis[100] = 1;
    while(!fila.empty()){
        ii daVez = fila.front();
        fila.pop();
        for(int i = 0; i < golpes.size(); i++){
            int g = golpes[i];
            int c = cabecas[i];
            if(daVez.fst == g){
                return daVez.snd + 1;
            }
            if(daVez.fst > g and daVez.fst - g + c < 1000 and !vis[daVez.fst - g + c]){
                vis[daVez.fst - g + c] = 1;
                fila.push(ii(daVez.fst - g + c, daVez.snd + 1));
            }
        }
    }
    return -1;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    int n;
    while(cin >> n and n){
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            golpes.pb(x);
        }
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            cabecas.pb(x);
        }
        int res = solve();
        if(res < 0){
            cout << "cavaleiro morreu" << endl;
        } else {
            cout << res << endl;
        }
        golpes.clear();
        cabecas.clear();
    }

    return 0;
}
