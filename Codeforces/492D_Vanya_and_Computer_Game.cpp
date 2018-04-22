#include <bits/stdc++.h>io

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
#define endl '\n'

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

const int VANYA = 1;
const int VOVA = 2;
const int BOTH = 0;

const int maxn = 2e6+5;

ll vet[maxn];

int main(int argc, char const *argv[]){
    cins_base::sync_with_stdio(false);

    ll n, x, y;
    cin >> n >> x >> y;
    ll a = 1, b = 1;
    ll pos = 0;

    while(a < x or b < y){
        if((ll)(a * y) < (ll)(b * x)){
            vet[pos++] = VANYA;
            a++;
        } else if((ll)(a * y) > (ll)(b * x)){
            vet[pos++] = VOVA;
            b++;
        } else {
            a++; b++;
            pos += 2;
        }
    }

    for(int i = 0; i < n; i++){
        int z;
        cin >> z;
        z--;
        switch (vet[z % (x + y)]) {
            case VANYA:
                cout << "Vanya" << endl;
                break;
            case VOVA:
                cout << "Vova" << endl;
                break;
            default:
                cout << "Both" << endl;
                break;
        }
    }

    return 0;
}
