#include <bits/stdc++.h>

using namespace std;

#define min(a, b) ((a) < (b) ? (a) : (b))

typedef long long ll;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;

vvi temp;
vvi adj;

int dp[16][1 << 16];
int dist[16][16];
int n;

int bit(int b){return (1 << b);}

int is_preffix(vi &a, vi &b){
    for(int i = 0; i < a.size(); i++){
        int aux = 0;
        int f = 1;
        for(int j = (a.size() - i - 1); j < a.size(); j++){
            if(a[j] != b[aux++]){
                f = 0;
                break;
            }
        }
        if(f){
            return (i + 1);
        }
    }
    return 0;
}

int solve(int u, int mask){
    if(bit(n)-1 == mask)
        return 0;
    if(dp[u][mask] != -1)
        return dp[u][mask];
    int res = 0;
    for(int i = 0; i < n; i++)
        if(! (bit(i)&mask) )
            res = max(res, solve(i, mask|bit(i)) + dist[u][i]);
    return dp[u][mask] = res;
}

int inside(vi &a, vi &b){
    if(a == b) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == b[0]){
            int cnt = 0;
            int aux = i;
            while(aux < a.size() and cnt < b.size() and a[aux] == b[cnt]){
                aux++;
                cnt++;
            }
            if(cnt == b.size()){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    memset(dp, -1, sizeof dp);
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int m; cin >> m;
        vi vec;
        for(int j = 0; j < m; j++){
            int x; cin >> x;
            vec.push_back(x);
        }
        temp.push_back(vec);
    }
    set<int> removidos;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(i != j && inside(temp[i], temp[j]))
                removidos.insert(j);
    vvi temporario;
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int rem : removidos)
            if(i == rem)
                flag = true;
        if(!flag)
            temporario.push_back(temp[i]);
    }
    temp = temporario;
    n = temp.size();

    for(int i = 0; i < n; i++)
        sum += temp[i].size();

    /*cout << "sum = " << sum << endl;

    for(vi vec : temp){
        cout << "vec : ";
        for(int val : vec)
            cout << val << " ";
        cout << endl;
    }*/

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            dist[i][j] = is_preffix(temp[i], temp[j]);

    int res = 0;
    for(int i = 0; i < n; i++)
        res = max(res, solve(i, bit(i)));
    cout << sum-res << endl;
    return 0;
}
