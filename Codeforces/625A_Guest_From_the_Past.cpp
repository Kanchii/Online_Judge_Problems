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

/*
999999999999999999
2
50000000000000000
49999999999999999
*/

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    ll n;
    cin >> n;
    ll a, b, c;
    cin >> a >> b >> c;

    ll resA, resB;

    resA = (n / a);
    if(n >= b){
        resB = (n - b) / (b - c) + 1;
    }
    resB = resB + (n - resB * (b - c)) / a;

    cout << (ll)max(resA, resB) << endl;

    return 0;
}