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

//------------------------Funções gerais---------------------------------
vector<ll> p;

void sieve(){
    bitset<MAX> pr;
    pr.set();
    pr[0] = pr[1] = 0;
    p.push_back(2);
    for(ll i = 4; i <= MAX; i += 2){
        pr[i] = 0;
    }
    for(ll i = 3; i <= MAX; i += 2){
        if(pr[i]){
            for(ll j = i * i; j <= MAX; j += 2){
                pr[j] = 0;
            }
        }
    }
}
//------------------------------------------------------------------------
int n, m;

int solve(){
    queue<ii> fila;
    fila.push(ii(n, 0));
    int vis[100000];
    memset(vis, 0, sizeof(vis));
    vis[n] = 1;
    while(!fila.empty()){
        ii u = fila.front();
        fila.pop();
        if(u.fst == m){
            return u.snd;
        }
        int a = u.fst * 2;
        int b = u.fst - 1;
        if(a < 100000 and !vis[a]){
            fila.push(ii(a, u.snd + 1));
            vis[a] = 1;
        }
        if(b > 0 and !vis[b]){
            fila.push(ii(b, u.snd + 1));
            vis[b] = 1;
        }
    }
}

int main(int argc, char const *argv[]){


    
    cin >> n >> m;
    cout << solve() << endl;

    return 0;
}