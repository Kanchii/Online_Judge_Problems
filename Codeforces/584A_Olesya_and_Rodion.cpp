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

int n, m;

int fPow(int a, int b){

    int r = 1;
    a %= m;
    while(b > 0){
        if(b & 1){
            r = (r * a) % m;
            b--;
        }
        a = (a * a) % m;
        b >>= 1;
    }
    return r;
}

string r = "";

bool solve(int pos, int resto){
    if(pos == n){
        return (resto == 0);
    }
    char rr;
    for(int i = (pos == 0); i < 10; i++){
        rr = (i + '0');
        int res = (i * fPow(10, n - pos - 1)) % m;
        if(solve(pos + 1, (resto + res) % m)){
            if(r == ""){
                r += rr;
            } else {
                r.insert(r.begin(), rr);
            }
            return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[]){

    cin >> n >> m;
    solve(0, 0);
    if(r != ""){
        prtl(r);
    } else {
        prtl(-1);
    }
    

    return 0;
}