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

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    int res = 0;
    char matriz[n + 1][m + 1];
    for(int i = 0; i < n; i++){
        int f = 0;
        int aux = 0;
        for(int j = 0; j < m; j++){
            cin >> matriz[i][j];
            if(matriz[i][j] == 'S'){
                f = 1;
            } else {
                aux++;
            }
        }
        if(!f){
            res += aux;
            for(int j = 0; j < m; j++){
                matriz[i][j] = 'T';
            }
        }
    }

    for(int i = 0; i < m; i++){
        int f = 0;
        int aux = 0;
        for(int j = 0; j < n; j++){
            if(matriz[j][i] == 'S'){
                f = 1;
            } else {
                if(matriz[j][i] != 'T'){
                    aux++;
                }
            }
        }
        if(!f){
            res += aux;
            for(int j = 0; j < n; j++){
                matriz[j][i] = 'T';
            }
        }
    }

    cout << res << endl;

    return 0;
}
