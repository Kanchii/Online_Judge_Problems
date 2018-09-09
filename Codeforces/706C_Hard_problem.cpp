#include <bits/stdc++.h>
using namespace std;

#define INF 1e18

typedef long long ll;

ll custos[123456];
ll dp[100005][2];
int n;
vector<pair<string, string> > vet;

ll solve(int p, int r){
    if(p == n) return 0;
    if(dp[p][r] != -1) return dp[p][r];
    ll res = 1e18;
    string ant = (r ? vet[p - 1].second : vet[p - 1].first);
    if(vet[p].first >= ant)
        res = min(res, solve(p + 1, 0));
    if(vet[p].second >= ant)
        res = min(res, solve(p + 1, 1) + custos[p]);
    return dp[p][r] = res;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> custos[i];
    }
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        string rs = s;
        reverse(rs.begin(), rs.end());
        vet.push_back(make_pair(s, rs));
    }
    memset(dp, -1, sizeof dp);
    ll a = solve(1, 0);
    memset(dp, -1, sizeof dp);
    ll b = solve(1, 1) + custos[0];
    ll c = min(a, b);
    if(c == INF) cout << "-1" << endl;
    else cout << c << endl;
    return 0;
}
