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
	int n;
	cin >> n;
	int r = 0;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		if(y - x >= 2){
			r++;
		}
	}
	cout << r << endl;

	return 0;
}