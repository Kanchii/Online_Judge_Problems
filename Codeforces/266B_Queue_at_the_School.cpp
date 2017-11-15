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
	string s;
	cin >> s;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n - 1; j++){
			if(s[j] == 'B' and s[j + 1] == 'G'){
				s[j] = 'G';
				s[j + 1] = 'B';
				j++;
			}
		}
	}

	cout << s << endl;

	return 0;
}