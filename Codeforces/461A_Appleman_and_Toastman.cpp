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

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

inline void getInt(int &n){
    n = 0;
    int ch = getchar();
    int sign = 1;

    while (ch<'0' || ch>'9'){
        if (ch == '-'){
            sign = -1;
        }
        ch = getchar();
    }

    while (ch >= '0' && ch <= '9'){
        n = (n << 3) + (n << 1) + ch - '0';
        ch = getchar();
    }

    n *= sign;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> vet;
    ll tot = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        tot += x;
        vet.pb(x);
    }

    sort(vet.begin(), vet.end());
    ll res = 0;
    for(int i = 0; i < n - 1; i++){
        res += tot + vet[i];
        tot -= vet[i];
    }
    res += tot;
    cout << res << endl;

    return 0;
}
