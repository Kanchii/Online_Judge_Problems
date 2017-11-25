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
    
    int n;
    cin >> n;
    ll vet[n + 1];
    fori(n){
        cin >> vet[i];
    }
    fori(n){
        ll l = (i == 0 ? (-LINF) : vet[i - 1]);
        ll r = (i == (n-1) ? LINF : vet[i + 1]);
        ll mini = min(vet[i] - l, r - vet[i]);
        ll maxi = max(vet[i] - vet[0], vet[n - 1] - vet[i]);
        cout << mini << " " << maxi << endl;
    }

    return 0;
}
