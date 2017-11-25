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

int main(int argc, char const *argv[]){
    
    int n, m, k;
    cin >> n >> m >> k;
    vi vet;
    fori(m + 1){
        int x;
        cin >> x;
        vet.pb(x);
    }
    int r = 0;
    int l = vet[m];
    fori(m){
        int d = 0;
        int v = vet[i];
        forj(n){
            if((v & (1 << j)) != (l & (1 << j))){
                d++;
            }
        }
        if(d <= k){
            r++;
        }
    }
    prtl(r);

    return 0;
}