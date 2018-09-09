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

vector<string> s;

void gera(int n, string ss){
    if(n == 0){
        s.pb(ss);
        return;
    }
    for(char c = 'a'; c <= 'f'; c++){
        gera(n - 1, ss + c);
    }
}

map<string, string> adj;
map<string, int> dp;

int solve(string ss){
    if(ss == "a") return 1;
    else if(ss.size() == 1)  return 0;
    if(dp.count(ss) != 0) return dp[ss];
    string aux = ss.substr(0, 2);
    if(adj.count(aux) > 0){
        string bah = adj[aux] + ss.substr(2, ss.size() - 2);
        if(solve(bah)) return dp[ss] = 1;
    }
    return dp[ss] = 0;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    gera(n, "");
    for(int i = 0; i < m; i++){
        string a, b;
        cin >> a >> b;
        adj[a] = b;
    }
    int r = 0;
    for(string ss : s ){
        int tmp = solve(ss);
        r += tmp;
    }
    cout << r << endl;

    return 0;
}
