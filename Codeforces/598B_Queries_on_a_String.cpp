#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100
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

void executeSwap(string &s, string aux, int pos, int start, int limit, int jump){
    int newPos = pos + jump;
    if(newPos > limit){
        newPos = (newPos - limit + start - 1);
    }
    s[newPos] = aux[pos];
}

void cycSwap(string &s, int l, int r, int k){

    k %= (r - l + 1);

    string aux = s;

    for(int i = l; i <= r; i++){
        executeSwap(s, aux, i, l, r, k);
    }

}

int main(int argc, char const *argv[]){
    string s;
    cin >> s;
    int n;
    cin >> n;
    while(n--){
        int l, r, k;
        cin >> l >> r >> k;
        l--; r--;
        cycSwap(s, l, r, k);
    }

    cout << s << endl;

    return 0;
}