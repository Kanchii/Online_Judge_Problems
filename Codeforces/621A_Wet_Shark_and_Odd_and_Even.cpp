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

int main(int argc, char const *argv[]){

    int n;
    cin >> n;
    vector<ll> vI, vP;
    while(n--){
        ll x;
        cin >> x;
        if(x % 2 == 0){
            vP.pb(x);
        } else {
            vI.pb(x);
        }
    }
    sort(vI.rbegin(), vI.rend());
    ll res = 0;
    for(int i = 1; i < vI.size(); i += 2){
        res += vI[i] + vI[i - 1];
    }
    for(int i = 0; i < vP.size(); i++){
        res += vP[i];
    }
    cout << res << endl;
    return 0;
}