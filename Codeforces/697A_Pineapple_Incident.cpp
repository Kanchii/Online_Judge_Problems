#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAXN 1010
#define MOD 1000000007
#define pb push_back
#define pu push
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

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    // t + n * s == x => n = (x - t) / s
    // t + n * s + 1 == x => n = (x - t - 1) / s

    int t, s, x;
    cin >> t >> s >> x;
    if(x == t){
        cout << "YES" << endl;
    } else {
        if(x < t){
            cout << "NO" << endl;
        } else {
            int n1 = floor((x - t) / s);
            int n2 = floor((x - t - 1) / s);
            ll t1 = t + n1 * s;
            if(n1 <= 0){
                t1 = -INF;
            }
            ll t2 = t + n2 * s + 1;
            if(n2 <= 0){
                t2 = -INF;
            }
            if(t1 == x or t2 == x){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
