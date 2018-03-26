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

vector<ll> v;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    ll a, b, f, k; cin >> a >> b >> f >> k;

    v.push_back(f);
    ll turn = k;
    while(k > 0){
        if(k == 1)
            v.push_back((a-f));
        else
            v.push_back((a-f)*2);
        k--;
        if(k == 0) break;

        if(k == 1)
            v.push_back(f);
        else
            v.push_back(2*f);
        k--;
    }
    if(turn == 1 && max(a-f, f) > b){
        cout << -1 << endl;
        return 0;
    }
    if(turn == 2 && max((a-f)*2, f) > b){
        cout << -1 << endl;
        return 0;
    }
    if(turn > 2 && max((a-f)*2, f*2) > b){
        cout << -1 << endl;
        return 0;
    }

    int n = v.size();

    ll res = 0, pos = 0;
    while(pos < n){
        int sum = 0;
        while(pos < n && v[pos]+sum <= b)
            sum += v[pos++];
        if(pos != n)
            res++;

    }
    cout << res << endl;
    return 0;

    return 0;
}
