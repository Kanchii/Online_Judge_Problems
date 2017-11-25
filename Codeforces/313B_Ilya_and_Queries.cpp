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
    string x;
    cin >> x;
    int vet[x.size() + 1];
    memset(vet, 0, sizeof(vet));
    forsi(1, x.size()){
        if(x[i] == x[i - 1]){
            vet[i] = vet[i - 1] + 1;
        } else {
            vet[i] = vet[i - 1];
        }
    }

    int n;
    cin >> n;
    fori(n){
        int a, b;
        cin >> a >> b;
        a--; b--;
        if(a == 0){
            prtl(vet[b]);
        } else {
            prtl(vet[b] - vet[a]);
        }
    }

    return 0;
}
