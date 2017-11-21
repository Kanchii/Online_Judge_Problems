#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000010
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

bitset<1000100> p;

void crivo(){

    p.set();
    p[0] = p[1] = 0;
    for(int i = 4; i <= MAX; i+= 2){
        p[i] = 0;
    }

    for(ll i = 3; i <= MAX; i += 2){
        if(p[i]){
            for(ll j = i * i; j <= MAX; j += i){
                p[j] = 0;
            }
        }
    }

}

int main(int argc, char const *argv[]){

    crivo();

    int n;
    cin >> n;
    while(n--){
        ll x;
        scanf("%I64d", &x);
        ll r = ceil(sqrt(x));
        ll d = floor(sqrt(x));
        if(p[r] and r == d){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}