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

//A fazer

ll dp[2001][2001];
string s;

ll solve(int l, int r){
    if(dp[l][r] != -1) return 0;
    if (l >= r) return 1;
    ll res = solve(l + 1, r) + solve(l, r - 1);
    if(s[l] == s[r]) res += solve(l + 1, r - 1);
    return dp[l][r] = res;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> s;
    int n = s.size() - 1;
    memset(dp, -1, sizeof dp);
    cout << solve(0, n) << endl;

    return 0;
}
