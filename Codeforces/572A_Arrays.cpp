#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 100005
#define pb push_back
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

    int n, m;
    cin >> n >> m;
    int k, kk;
    cin >> k >> kk;
    vi a(n + 1);
    vi b(m + 1);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    k--;
    int v = a[k];
    auto it = upper_bound(b.begin(), b.end(), v);
    int diff = (b.end() - it) - 1;
    if(diff >= kk){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}
