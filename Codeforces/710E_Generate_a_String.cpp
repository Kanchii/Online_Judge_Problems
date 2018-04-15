#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAXN 100000000
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
typedef unsigned long long ull;

ll n, x, y, dp[10000005];

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin >> n >> x >> y;
    dp[0] = 0;
    dp[1] = x;
    dp[2] = min(x+x, x + y);
    for(int i = 3; i <= n; i++){
        dp[i] = dp[i-1]+x;
        if(i%2 == 0)
            dp[i] = min(dp[i], dp[i/2]+y);
        if(i%2 != 0)
            dp[i] = min(dp[i], dp[i/2 + 1] + x + y);
    }
    cout << dp[n] << endl;
    return 0;
}
