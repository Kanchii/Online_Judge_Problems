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

int main(int argc, char const *argv[]){

	int n;
	cin >> n;
	string s;
	cin >> s;
	int vet[30];
	memset(vet, 0, sizeof(vet));
	if(s.size() > 26){
		cout << -1 << endl;
	} else {
		for(int i = 0; i < s.size(); i++){
			int pos = s[i] - 'a';
			vet[pos]++;
		}
		int res = 0;
		for(int i = 0; i < 26; i++){
			res += (vet[i] > 0 ? (vet[i] - 1) : 0);
		}
		cout << res << endl;
	}

}