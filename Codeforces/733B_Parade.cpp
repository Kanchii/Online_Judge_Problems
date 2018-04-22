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
    int n;
    cin >> n;
    ii vet[n + 1];

    int l = 0, r = 0;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        vet[i] = ii(x, y);
        l += x;
        r += y;
    }

    int diff = abs(l - r);
    int res = 0;
    int cnt = 0;
    for(ii p : vet){
        int aux = p.snd - p.first;
        if(diff < abs((l + aux) - (r - aux))){
            diff = abs((l + aux) - (r - aux));
            res = cnt + 1;
        }
        cnt++;
    }
    cout << res << endl;

    return 0;
}
