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

map<int, int> mapa;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int x;
    int sum = 0;
    for(int i = 0; i < 5; i++){
        cin >> x;
        sum += x;
        mapa[x]++;
    }
    int res = sum;
    for(ii p : mapa){
        int qtd = max(min(2, p.snd), min(3, p.snd));
        if(qtd <= 1) continue;
        res = min(res, sum - qtd * p.fst);
    }
    cout << res << endl;

    return 0;
}
