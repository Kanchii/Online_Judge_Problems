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

int n, m;
int dp[10010][11];

int solve(int cnt, int k ){
    if(cnt > n){
        return INF;
    }
    if(cnt == n){
        return (k == 0 ? 0 : INF);
    }
    if(dp[cnt][k] != -1){
        return dp[cnt][k];
    }
    return dp[cnt][k] = min(1 + solve(cnt + 1, (k + 1) % m), 1 + solve(cnt + 2, (k + 1) % m));

}

int main(int argc, char const *argv[]){
    cin >> n >> m;
    memset(dp, -1, sizeof(dp));
    int k = solve(0, 0);
    prtl((k >= INF ? -1 : k));

    return 0;
}