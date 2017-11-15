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

	int n, m;
	cin >> n >> m;
	int mini = min(n, m);
	if(mini % 2 == 0){
		cout << "Malvika" << endl;
	} else {
		cout << "Akshat" << endl;
	}

	return 0;
}