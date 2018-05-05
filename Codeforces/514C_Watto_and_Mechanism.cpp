#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;

map<char,int> adj[600005];
int tam, mark[600005];

void addTrie(string s){
    int v = 1;
    for(char c : s){
        if(adj[v][c] == 0)
            adj[v][c] = ++tam;
        v = adj[v][c];
    }
    mark[v] = 1;
}

bool dfs(string& s, int pos, int k, int u){
    if(pos == s.size() && mark[u] && k == 1)
        return true;
    assert(u != 0);
    for(ii viz : adj[u])
        if(k == 0 || viz.first == s[pos]){
            bool res = dfs(s, pos+1, k + (viz.first != s[pos]), viz.second);
            if(res)
                return true;
        }
    return false;
}


int main(){
    cout.sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n >> m;
    tam = 1;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        addTrie(s);
    }
    for(int i = 0; i < m; i++){
        string s; cin >> s;
        if(dfs(s, 0, 0, 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
