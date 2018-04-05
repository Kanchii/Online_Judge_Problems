#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAXN 40010
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
int numPrimos = 0;

void crivo(){
    bitset<MAXN> p;
    p.set();
    p[0] = p[1] = 0;
    for(ll i = 4; i < MAXN - 10; i += 2){
        p[i] = 0;
    }
    primos.pb(2);
    for(ll i = 3; i < MAXN - 10; i += 2){
        if(p[i]){
            primos.pb(i);
            for(ll j = i * i; j < MAXN - 10; j += i){
                p[j] = 0;
            }
        }
    }
}

int fator[MAXN];
ll bigPrimo;

int fatorar_first(ll x){
    for(int i = 0; i < primos.size() and primos[i] <= x; i++){
        ll pr = primos[i];
        if(x % pr == 0){
            ll cnt = 0;
            while(x > 1 and x % pr == 0){
                cnt++;
                x /= pr;
            }
            if(pr > 3){
                fator[pr] = cnt;
                numPrimos++;
            }
        }
    }
    if(x > 3){
        numPrimos++;
        if(x >= MAXN){
            bigPrimo = x;
        } else {
            fator[x] = 1;
        }
    }
}
/*
int valid(vector<pair<ll, int> > &v){
    if(v.size() != pp.size()){
        return 0;
    }
    for(int i = 0; i < pp.size(); i++){
        if(v[i].first != pp[i].first or v[i].second != pp[i].second){
            return 0;
        }
    }
    return 1;
}*/

int fatorar(ll x){
    vector<pair<ll, int> > vet;
    int aux = 0;
    for(int i = 0; i < primos.size() and primos[i] <= x; i++){
        ll pr = primos[i];
        if(x % pr == 0){
            ll cnt = 0;
            while(x > 1 and x % pr == 0){
                cnt++;
                x /= pr;
            }
            if(pr > 3){
                aux++;
            }
            if(pr > 3 and fator[pr] != cnt){
                return 0;
            }

        }
    }
    if(x > 3){
        aux++;
        if(x >= MAXN){
            if(x != bigPrimo){
                return 0;
            }
        } else {
            if(fator[x] != 1){
                return 0;
            }
        }
    }
    return (aux == numPrimos);
}

map<ll, int> vis;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    crivo();
    ll n;
    cin >> n;
    ll x;
    cin >> x;
    vis[x] = 1;
    fatorar_first(x);
    int f = 1;
    for(int i = 1; i < n; i++){
        ll x;
        cin >> x;
        if(f and vis.count(x) == 0){
            if(!fatorar(x)){
                f = 0;
            }
        }
    }
    if(f){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
