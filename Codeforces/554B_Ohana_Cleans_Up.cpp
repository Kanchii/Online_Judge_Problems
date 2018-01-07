#include <bits/stdc++.h>

using namespace std;

#define INF (1LL << 31 - 1)
#define LINF (1LL << 63 - 1)
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

int counting(string &s){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            cnt++;
        }
    }
    return cnt;
}

int main(int argc, char const *argv[]){

    int n;
    cin >> n;
    int res = 0;
    vector<string> vs;
    fori(n){
        string s;
        cin >> s;
        vs.pb(s);
        if(counting(s) == n){
            res++;
        }
    }  
    int vis[n + 1];
    memset(vis, 0, sizeof(vis));
    for(int i = 0; i < n; i++){
        int cnt = 1;
        if(!vis[i]){
            for(int j = i + 1; j < n; j++){
                if(!vis[j] and vs[j] == vs[i]){
                    vis[j] = 1;
                    cnt++;
                }
            }
        }
        if(cnt > res){
            res = cnt;
        }
    }
    cout << res << endl;

    return 0;
}
