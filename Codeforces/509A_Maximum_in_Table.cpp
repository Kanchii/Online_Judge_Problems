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
    int matriz[n + 1][n + 1];
    memset(matriz, 0, sizeof(matriz));
    for(int i = 0; i < n; i++){
        matriz[i][0] = matriz[0][i] = 1;
    }

    ll maxi = 1;
    forsi(1, n){
        forsj(1, n){
            matriz[i][j] = matriz[i - 1][j] + matriz[i][j - 1];
            maxi = max(maxi, matriz[i][j]);
        }
    }
    prtl(maxi);

    return 0;
}