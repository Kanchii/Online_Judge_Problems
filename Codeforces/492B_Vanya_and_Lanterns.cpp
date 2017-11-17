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
#define DEBUG(x) cout << #x << " = " << x << endl
#define prtl(x) cout << x << endl;
#define prt(x) cout << x

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){
    
    int n;
    ll l;
    cin >> n >> l;
    vector<ll> v;
    fori(n){
        ll x;
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    double r = 0.0;
    r = max(v[0], l - v[n - 1]);
    fori(n - 1){
        r = max(r, (v[i + 1] - v[i]) / 2.0);
    }
    
    printf("%.9f\n", r);

    return 0;
}