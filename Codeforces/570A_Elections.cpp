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

vvii vet;

int ord(const ii &a, const ii &b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first > b.first;
}

map<ll, int> mapa;

int main(int argc, char const *argv[]){

    int n, m;
    cin >> n >> m;

    vet.assign(m + 1, vii());
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            vet[i].push_back(ii(x, j));
        }
    }
    for(int i = 0; i < m; i++){
        sort(vet[i].begin(), vet[i].end(), ord);
        mapa[vet[i][0].second]++;
    }
    int idx = 0;
    int maxi = -1;
    for(ii p : mapa){
        if(p.second > maxi){
            maxi = p.second;
            idx = p.first;
        }
    }

    cout << idx + 1 << endl;

    return 0;
}
