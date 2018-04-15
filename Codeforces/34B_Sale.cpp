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

int vet[110];
int dp[110][110];
int n, k;

int solve(int pos, int v){
    if(v > k){
        return -INF;
    }
    if(pos >= n){
        return 0;
    }
    if(dp[pos][v] != -1){
        return dp[pos][v];
    }
    int r = solve(pos + 1, v);
    if(vet[pos] < 0){
        r = max(r, -vet[pos] + solve(pos + 1, v + 1));
    }
    return dp[pos][v] = r;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> vet[i];
    memset(dp, -1, sizeof dp);
    cout << solve(0, 0) << endl;

    return 0;
}
