#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 100005
#define pb push_back
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

    ll n;
    cin >> n;

    ll res = 0;
    int digits = 1;
    ll l = 1;
    ll r = min(10, n);

    while(r < n){
        res += (r - l) * (floor(log10(l)) + 1);
        l = r;
        r = min(r * 10, n);
    }
    res += (r - l) * (floor(log10(l)) + 1) + ((floor(log10(r))) + 1);
    /*if(r <= 10){
        res++;
    }*/
    cout << res << endl;

    return 0;
}
