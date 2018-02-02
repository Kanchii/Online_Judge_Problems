#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

map<string, int> mapa;

int main(int argc, char const *argv[]){
	
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		mapa[s]++;
	}
	int maxi = 0;
	string res;
	map<string,int>::iterator it = mapa.begin();
	for(; it != mapa.end(); it++){
		if(it -> second > maxi){
			maxi = it -> second;
			res = it -> first;
		}
	}
	cout << res << endl;

}