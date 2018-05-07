#include <bits/stdc++.h>

using namespace std;

#define INF (((1LL) << (31)) - 1)
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define PI 2 * acos(0.0)
#define MAX 1000100
#define MOD 1000000007
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

map<string, int> mapa;

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	string s;
	cin >> s;
	string aux = "";
	for(int i = 0; i < s.size() - 1; i++){
		aux += s[i];
		aux += s[i + 1];
		mapa[aux]++;
		aux = "";
	}
	pair<string, int> r;
	int maxi = 0;
	for(pair<string, int> res : mapa){
		if(res.second > maxi){
			r = res;
			maxi = res.second;
		}
	}
	cout << r.first << endl;

    return 0;
}
