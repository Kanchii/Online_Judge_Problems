#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>

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


int ordLeft(const ii &a, const ii &b){
    return a.snd < b.snd;
} 

int ordRight(const ii &a, const ii &b){
    return a.fst > b.fst;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vii v;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v.emplace_back(x, y);
    }

    int m;

    vii vv;

    cin >> m;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        vv.emplace_back(x, y);
    }

    sort(v.begin(), v.end(), ordLeft);
    sort(vv.begin(), vv.end(), ordRight);

    ii primeiro = v[0];
    ii segundo = vv[0];

    int ff = segundo.fst - primeiro.snd;

    sort(v.begin(), v.end(), ordRight);
    sort(vv.begin(), vv.end(), ordLeft);

    primeiro = vv[0];
    segundo = v[0];

    int ss = segundo.fst - primeiro.snd;

    int res = max(ss, ff);

    cout << (res < 0 ? 0 : res) << endl;

    return 0;
}
