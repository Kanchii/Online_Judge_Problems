#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string.h>

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

ll solve(ll a, ll b, ll c, int bitmask){
    if(bitmask + 1 == (1 << 4)){
        return 0;
    }
    ll res = 0;
    for(int i = 0; i < 4; i++){
        if(!(bitmask & (1 << i))){
            ll aa = a, bb = b, cc = c;
            ll tot = 0, mini;
            switch (i) {
                case 0:
                    tot += aa / 3;
                    aa %= 3;
                    break;
                case 1:
                    tot += bb / 3;
                    bb %= 3;
                    break;
                case 2:
                    tot += cc / 3;
                    cc %= 3;
                    break;
                default:
                    mini = min(aa, min(bb, cc));
                    tot += mini;
                    aa -= mini;
                    bb -= mini;
                    cc -= mini;
                    break;
            }
            res = max(res, solve(aa, bb, cc, bitmask | (1 << i)) + tot);
        }
    }
    return res;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b, c;
    cin >> a >> b >> c;

    cout << solve(a, b, c, 0) << endl;
    return 0;
}
