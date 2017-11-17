#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
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

bool ord(const ii &a, const ii &b){
    if(a.first == b.first){
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main(int argc, char const *argv[]){
    
    int s, n;
    cin >> s >> n;
    vii v;
    fori(n){
        int x, y;
        cin >> x >> y;
        v.pb(ii(x, y));
    }

    sort(v.begin(), v.end(), ord);
    int f = 1;
    for(ii p : v){
        if(s > p.first){
            s += p.second;
        } else {
            f = 0;
            break;
        }
    }
    if(f){
        prtl("YES");
    } else {
        prtl("NO");
    }

    return 0;
}