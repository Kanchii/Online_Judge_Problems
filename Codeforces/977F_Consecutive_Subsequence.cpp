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

typedef long long ll;

typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;

map<ll, ii> mapa;

int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vi v;
	for(int i = 0; i < n; i++){
		ll x;
		cin >> x;
		if(mapa.find(x - 1) != mapa.end()){
			mapa[x] = make_pair(mapa[x - 1].first + 1, i);
		} else {
			mapa[x] = make_pair(1, i);
		}
		v.emplace_back(x);
	}
	
	int maxi = 0;
	int vv;
	ii res;
	for(pair<ll, ii> p : mapa){
		if(p.second.first > maxi){
			res = p.second;
			vv = p.first;
			maxi = p.second.first;
		}
	}
	
 	int va = vv;
	vi rr;
	while(res.first != 1){
//		cout << res.second << " ";
		rr.emplace_back(res.second + 1);
		res = mapa[--va];
	}
	rr.emplace_back(mapa[va].second + 1);
//	cout << mapa[va].second << endl;
	cout << rr.size() << endl;
	for(int i = rr.size() - 1; i >= 0; i--){
		cout << rr[i] << " ";
	} cout << endl;

	return 0;
}
