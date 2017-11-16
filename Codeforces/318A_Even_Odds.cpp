#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){

	ll x, k;
	cin >> x >> k;

	ll mid = (x % 2 == 0 ? (x / 2) : (x / 2) + 1);

	if(k > mid){
		ll res = k - mid;
		cout << (2LL * res) << endl;
	} else {
		
		cout << (2LL * k - 1) << endl;

	}

}