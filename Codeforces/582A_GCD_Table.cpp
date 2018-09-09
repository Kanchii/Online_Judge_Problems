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

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vi vet;
    set<int, greater<int> > s;
    map<int, int> mapa;
    for(int i = 0; i < n * n; i++){
        int x;
        cin >> x;
        vet.pb(x);
        mapa[x]++;
        s.insert(x);
    }

    vi res;
    for(auto p : s){
        while(mapa[p] > 0){
            mapa[p]--;
            for(auto pp : res){
                mapa[__gcd(pp, p)] -= 2;
            }
            res.pb(p);
        }
    }
    for(auto v : res) cout << v << " ";
    cout << endl;
    return 0;
}
