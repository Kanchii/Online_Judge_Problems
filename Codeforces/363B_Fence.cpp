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
    int n, k;
    cin >> n >> k;
    ll vet[n + 1];
    int res;
    int idx;
    for(int i = 0; i < n; i++){
        cin >> vet[i];
        if(i){
            vet[i] += vet[i - 1];
        }
        if(i == k - 1){
            res = vet[i];
            idx = 0;
        } else if(i > k - 1){
            if(vet[i] - vet[i - k] < res){
                res = vet[i] - vet[i - k];
                idx = i - k + 1;
            }
        }
    }
    cout << idx + 1 << endl;

    return 0;
}
