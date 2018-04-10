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

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vii v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.pb(ii(x, i));
    }
    sort(v.begin(), v.end());
    ll res = 0;
    for(int i = 1; i < n; i++){
        res += abs(v[i].snd - v[i - 1].snd);
    } cout << res << endl;

    return 0;
}
