#include <bits/stdc++.h>

using namespace std;

#define INF ((1 << 30) - 1)
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

int ri () {
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
int rll () {
	bool minus = false;
	ll result = 0;
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
	cin >> n >> k;
	int vet[n + 1];
	int tot = 0;
	for(int i = 0; i < n; i++){
		cin >> vet[i];
		tot += vet[i];
	}
	if(n * 8 < k or tot < k){
		cout << "-1" << endl;
	} else {
		int arya = 0;
		int bran = 0;
		int f = 0;
		for(int i = 0; i < n; i++){
			arya += vet[i];
			bran += min(8, arya);
			arya -= min(8, arya);
			if(bran >= k){
				cout << i + 1 << endl;
				f = 1;
				break;
			}
		}
		if(!f){
			cout << -1 << endl;
		}
	}

    return 0;
}
