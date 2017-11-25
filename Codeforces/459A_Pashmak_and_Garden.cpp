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

int main(int argc, char const *argv[]){
    int x, y, xx, yy;
    cin >> x >> y >> xx >> yy;
    if(x == xx){
        int diff = abs(yy - y);
        cout << (x + diff) << " " << y << " " << (xx + diff) << " " << yy << endl;
    } else if(y == yy){
        int diff = abs(xx - x);
        cout << x << " " << (y + diff) << " " << xx << " " << (yy + diff) << endl;
    } else {
        int h = abs(xx - x);
        int w = abs(yy - y);
        if(h != w){
            cout << -1 << endl;
        } else {
            cout << xx << " " << y << " " << x << " " << yy << endl;
        }
    }

    return 0;
}
