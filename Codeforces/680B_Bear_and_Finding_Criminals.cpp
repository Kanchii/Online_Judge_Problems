#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define DINF (1.0 / 0.0)
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 100000
#define mp make_pair
#define pb push_back
#define PI (2 * acos(0.0))
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define DEBUG(x) cout << #x << " = " << x << endl
#define fst first
#define snd second
#define endl '\n'

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int *vet = new int[n + 1];
    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }

    int l = m - 1;
    int r = m - 1;

    int res = 0;

    while(l >= 0 or r < n){
        if(l < 0){
            res += vet[r];
        } else if(r >= n){
            res += vet[l];
        } else {
            if(vet[l] and vet[r]){
                res += (l == r ? 1 : 2);
            }
        }
        if(l >= 0){
            l--;
        }
        if(r < n){
            r++;
        }
    }
    cout << res << endl;

    return 0;
}
