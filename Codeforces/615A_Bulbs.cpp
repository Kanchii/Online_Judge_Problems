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

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int vet[m + 1];
    memset(vet, 0, sizeof vet);
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        for(int j = 0; j < k; j++){
            int x;
            cin >> x;
            x--;
            vet[x] = 1;
        }
    }
    int f = 1;
    for(int i = 0; i < m; i++){
        if(!vet[i]){
            f = 0;
            break;
        }
    }
    if(f){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
