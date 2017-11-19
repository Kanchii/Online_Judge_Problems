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

int solve(int n, int x){
    int r = 0;
    int raiz = floor(sqrt(x));
    forsi(1, raiz + 1){
        if(x % i == 0){
            if(x / i <= n){
                if(x / i != i){
                    r += 2;
                } else {
                    r++;
                }
            }
        }
    }
    return r;
}

int main(int argc, char const *argv[]){
    
    int n, x;
    cin >> n >> x;
    prtl(solve(n, x));
    return 0;
}