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

vector<ll> primos;

void crivo(){
    bitset<MAXN> p;
    p.set();
    p[0] = p[1] = 0;
    for(ll i = 4; i < MAXN; i += 2){
        p[i] = 0;
    }
    primos.pb(2);
    for(ll i = 3; i < MAXN; i += 2){
        if(p[i]){
            primos.pb(i);
            for(ll j = i * i; j < MAXN; j += i){
                p[j] = 0;
            }
        }
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    crivo();
    int n, k;
    cin >> n >> k;
    int res = 0;
    for(int i = 0; i < primos.size() and primos[i] <= n; i++){
        //cout << "Primo: " << primos[i] << endl;
        int v = primos[i];
        int f = 0;
        for(int j = 0; j < i - 1; j++){
                //cout << "Somando: " << primos[j] << " + " << primos[k] << " + 1 = " << primos[j] + primos[k] + 1 << endl;
            int sum = primos[j] + primos[j + 1] + 1;
            if(sum == v){
                f = 1;
                break;
            }
        }
        if(f) res++;
        //cout << "Fim: " << res << endl << endl;
    }
    if(res >= k){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
