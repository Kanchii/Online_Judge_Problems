#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){
	int n;
	cin >> n;
	vi v(n + 1);
	int tot = 0;
	for(int i = 0; i < n; i++){
		cin >> v[i];
		tot += v[i];
	}

	sort(v.rbegin(), v.rend());
	int m = 0;
	for(int i = 0; i < v.size(); i++){
		m += v[i];
		tot -= v[i];
		if(m > tot){
			cout << i + 1 << endl;
			break;
		}
	}

	return 0;
}