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

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vi v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    int l = 1, r = v.size() - 2;
    for(int i = 1; i < v.size() and v[i] == v[i - 1]; i++){
        l++;
    }
    for(int i = v.size() - 2; i >= 0 and v[i] == v[i + 1]; i--){
        r--;
    }
    cout << max(0, r - l + 1) << endl;

    return 0;
}
