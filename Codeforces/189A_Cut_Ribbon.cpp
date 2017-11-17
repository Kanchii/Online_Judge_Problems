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

int vet[3];
int dp[4100][3];

int solve(int n, int p){
    if(n == 0){
        return 0;
    }
    if(p == 3 or n < 0){
        return -INF;
    }
    if(dp[n][p] != -1){
        return dp[n][p];
    }

    return dp[n][p] = max(solve(n, p + 1), 1 + solve(n - vet[p], p));
}

int main(int argc, char const *argv[]){
    
    int n;
    cin >> n;
    fori(3){
        cin >> vet[i];
    }
    memset(dp, -1, sizeof(dp));
    prtl(solve(n, 0));

    return 0;
}