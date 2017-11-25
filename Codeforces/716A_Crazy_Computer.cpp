#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100
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

int b[110], g[110];
int n, m;
int dp[110][110];

int solve(int posb, int posg){
    
    if(posb == n or posg == m){
        return 0;
    }
    if(dp[posb][posg] != -1){
        return dp[posb][posg];
    }
    int res = max(solve(posb + 1, posg), max(solve(posb, posg + 1), solve(posb + 1, posg + 1)));
    if(abs(b[posb] - g[posg]) <= 1){
        res = max(res, 1 + solve(posb + 1, posg + 1));
    }
    return dp[posb][posg] = res;
    
}

int main(int argc, char const *argv[]){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> g[i];
    }
    
    sort(b, b + n);
    sort(g, g + m);
    memset(dp, -1 ,sizeof(dp));
    cout << solve(0, 0) << endl;
    
    return 0;
}