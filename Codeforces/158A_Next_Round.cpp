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
	
	int n, k;
	cin >> n >> k;
	vi v;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	int s = v[k - 1];
	int r = 0;
	for(int l = 0; l < n; l++){
		if(v[l] >= s and v[l] > 0){
			r++;
		}
	}
	cout << r << endl;

	return 0;
}