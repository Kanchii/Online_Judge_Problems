#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAXN 1010
#define MOD 1000000007
#define pb push_back
#define mp make_pair
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

map<ll, int> mapa;

void solve(){
    queue<ll> fila;
    int cnt = 3;
    fila.push(4);
    fila.push(7);
    mapa[4] = 1;
    mapa[7] = 2;
    while(!fila.empty()){
        if(fila.size() > 10000){
            cout << "Creem" << endl;
            break;
        }
        ll daVez = fila.front();
        fila.pop();
        ll f = daVez * 10 + 4;
        if(f <= 1e9){
            mapa[f] = cnt++;
            fila.push(f);
        } else {
            continue;
        }
        ll s = daVez * 10 + 7;
        if(s <= 1e9){
            mapa[s] = cnt++;
            fila.push(s);
        }
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    solve();
    int n;
    cin >> n;
    cout << mapa[n] << endl;
    return 0;
}
