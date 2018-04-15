#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAXN 100000000
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
typedef unsigned long long ull;

vector<vector<int> > m1(15), m2(15);
map<vvi, int> mapa;
int n;

vvi _rotate(vvi &b){
    vvi nn(n, vi(n, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            nn[i][j] = b[j][n - i - 1];
        }
    }
    return nn;
}

vvi change(vvi &b){
    vvi nn(n, vi(n, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            nn[i][j] = b[n - j - 1][n - i - 1];
        }
    }
    return nn;
}

int solve(vvi &a, vvi &b){
    int f = 1;
    for(int i = 0; i < n and f; i++){
        for(int j = 0; j < n and f; j++){
            if(b[i][j] != a[i][j]) f = 0;
        }
    }
    if(f) return 1;
    if(mapa.count(b) > 0){
        return 0;
    }
    mapa[b] = 1;
    vvi _rot = _rotate(b);
    if(solve(a, _rot)){
        return 1;
    }
    vvi _tran = change(b);
    if(solve(a, _tran)){
        return 1;
    }
    return 0;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char x;
            cin >> x;
            m1[i].push_back((x == 'O' ? 0 : 1));
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char x;
            cin >> x;
            m2[i].push_back((x == 'O' ? 0 : 1));
        }
    }
    if(solve(m1, m2)){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
