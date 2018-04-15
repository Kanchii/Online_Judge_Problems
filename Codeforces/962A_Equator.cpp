#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAXN 100000000
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
typedef unsigned long long ull;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    ll sum = 0;
    int vet[n + 1];
    for(int i = 0; i < n; i++){
        cin >> vet[i];
        sum += vet[i];
    }
    ll r = 0;
    for(int i = 0; i < n; i++){
        r += vet[i];
        if(r >= (sum % 2 == 0 ? sum / 2 : sum / 2 + 1)){
            cout << (i + 1) << endl;
            break;
        }
    }

    return 0;
}
