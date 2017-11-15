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

	int x;
	cin >> x;

	if(x % 5 != 0){
		cout << floor(x / 5.0) + 1 << endl;
	} else {
		cout << (x / 5) << endl;
	}

	return 0;
}