#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAXN 100005
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

    int l;
    cin >> l;
    int p, q;
    cin >> p >> q;

    double ft = (l / (double)(p + q));
    double dq = q * ft;

    double tpv = (l - dq) / (double)p;
    double tqv = dq / (double)q;

    if(tpv > tqv){
        double diff = (tpv - tqv);
        double d2 = (l - diff * q)/(double)(p + q);
        cout << l - p * d2 << endl;
    } else {
        double diff = (tqv - tpv);
        double d2 = (l - diff * p) / (double)(p + q);
        cout << l - p * d2 << endl;
    }

    return 0;
}
