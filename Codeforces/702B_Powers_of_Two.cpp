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

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int readInt () {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}

map<ll, vi> mapa;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int n;
    n = readInt();
    ll maxi = 0;
    vi v;
    for(int i = 0; i < n; i++){
        int x;
        x = readInt();
        v.pb(x);
        mapa[x].pb(i);
    }
    ll res = 0;
    for(int i = 0; i < n; i++){
        int u = v[i];
        for(ll j = log2(u) + 1; j <= 32; j++){
            ll aux = floor(pow(2, j)) - u;
            if(mapa.find(aux) != mapa.end()){
                res += (mapa[aux].end() - upper_bound(mapa[aux].begin(), mapa[aux].end(), i));
            }
        }
    }
    cout << res << endl;
    return 0;
}
