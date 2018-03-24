#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAXN 500010
#define mp make_pair
#define pb push_back
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define DEBUG(x) cout << #x << " = " << x << endl

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){

    int n;
    cin >> n;
    int vet[n + 1];
    ll tot = 0;
    fori(n){
        cin >> vet[i];
        tot += vet[i];
    }
    ll res = 0;
    if(tot % 3 != 0){
        cout << 0 << endl;
    } else {
        ll nv[n + 1];
        ll rv[n + 1];
        ll cnt_rv[n + 1];
        nv[0] = vet[0];
        forsi(1, n){
            nv[i] = nv[i - 1] + vet[i];
        }

        ll med = tot / 3;

        rv[n - 1] = vet[n - 1];

        cnt_rv[n - 1] = (rv[n - 1] == med);
        for(int i = n - 2; i >= 0; i--){
            rv[i] = rv[i + 1] + vet[i];
            cnt_rv[i] = cnt_rv[i + 1] + (rv[i] == med);
        }
        for(int i = 0; i < n - 2; i++){
            if(nv[i] == med){
                res += cnt_rv[i + 2];
            }
        }
        cout << res << endl;
    }


    return 0;
}
