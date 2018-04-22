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
#define fst first
#define snd second
#define endl '\n'

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;
typedef unsigned long long llu;

#define REST 0
#define WRITE 1
#define GYM 2

int vet[105];
int n;
int dp[105][5];

int solve(int pos, int act){
    if(pos == n){
        return 0;
    }
    int &r = dp[pos][act];
    if(r != -1){
        return r;
    }

    int acts = vet[pos];
    int res = 1 + solve(pos + 1, REST);
    switch (acts) {
        case 1:
            if(act != WRITE){
                res = min(res, solve(pos + 1, WRITE));
            }
            break;
        case 2:
            if(act != GYM){
                res = min(res, solve(pos + 1, GYM));
            }
            break;
        case 3:
            if(act != WRITE){
                res = min(res, solve(pos + 1, WRITE));
            }
            if(act != GYM){
                res = min(res, solve(pos + 1, GYM));
            }
            break;
    }
    return r = res;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }
    memset(dp, -1, sizeof dp);
    cout << solve(0, 4) << endl;

    return 0;
}
