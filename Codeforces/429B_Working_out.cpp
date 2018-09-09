#include <bits/stdc++.h>
using namespace std;

//#define max(a,b) ((a) > (b) ? (a) : (b))

typedef long long ll;

ll mat[1005][1005], dp[1005][1005][4], n, m;

bool valid(ll x, ll y){return x >= 1 and x <= n and y >= 1 and y <= m;}

ll solve(ll x, ll y, ll dx, ll dy, ll flag){
    if(flag == 0 and x == n and y == m)
        return dp[x][y][flag] = mat[x][y];
    if(flag == 1 and x == 1 and y == m)
        return dp[x][y][flag] = mat[x][y];
    if(flag == 2 and x == n and y == 1)
        return dp[x][y][flag] = mat[x][y];
    if(flag == 3 and x == 1 and y == 1)
        return dp[x][y][flag] = mat[x][y];
    if(dp[x][y][flag] != -1) return dp[x][y][flag];
    ll res = 0;
    if(valid(x+dx, y))
        res = max(res, solve(x+dx, y, dx, dy, flag));
    if(valid(x, y+dy))
        res = max(res, solve(x, y+dy, dx, dy, flag));

    res += mat[x][y];
    return dp[x][y][flag] = res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    for(ll i = 1; i <= n; i++)
        for(ll j = 1; j <= m; j++)
            cin >> mat[i][j];
    memset(dp, -1, sizeof dp);
    solve(1, 1, 1, 1, 0);
    solve(n, 1, -1, 1, 1);
    solve(1, m, 1, -1, 2);
    solve(n, m, -1, -1, 3);

    ll res = 0;

    for(ll i = 2; i <= n - 1; i++)
        for(ll j = 2; j <= m - 1; j++){
            // Pessoa 1: Direita Direita
            // Pessoa 2: Cima Cima
            ll first = 0, second = 0;
            //if(j-1 >= 1 and j+1 <= m and i+1 <= n and i-1 >= 1)
                first = dp[i][j - 1][3] + dp[i][j + 1][0] + dp[i+1][j][2] + dp[i-1][j][1];
            //if(i-1 >= 1 and i+1 <= n and j-1 >= 1 and j+1 <= m)
                second = dp[i-1][j][3] + dp[i+1][j][0] + dp[i][j-1][2] + dp[i][j+1][1];
            // Pessoa 1: Direita Baixo
            // Pessoa 2: Não tem como '-'

            // Pessoa 1: Baixo Baixo
            // Pessoa 2: Direita Direita
            ll tot = max(first, second);
            res = max(res, tot);
        }

    // i

    cout << res << endl;

    return 0;
}
