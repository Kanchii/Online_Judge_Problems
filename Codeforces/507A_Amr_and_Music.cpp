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

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int n, k;
    n = readInt();
    k = readInt();
    vii v;
    for(int i = 0; i < n; i++){
        int x;
        x = readInt();
        v.pb(ii(x, i));
    }
    sort(v.begin(), v.end());
    int tot = 0;
    int res = 0;
    vi r;
    for(ii u : v){
        if(tot + u.first > k){
            break;
        }
        res++;
        tot += u.first;
        r.pb(u.second);
    }
    cout << res << endl;
    for(int i = 0; i < r.size(); i++){
        if(i) cout << " ";
        cout << r[i] + 1;
    } cout << endl;
    return 0;
}
