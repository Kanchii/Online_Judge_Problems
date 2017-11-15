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

bool solve(string x){

	int vet[10];
	memset(vet, 0, sizeof(vet));
	for(char c : x){
		if(vet[c - '0']++){
			return false;
		}
	}
	return true;

}

int main(int argc, char const *argv[]){
	int x;
	cin >> x;
	for(int i = x + 1; ; i++){
		string s = to_string(i);
		if(solve(s)){
			cout << s << endl;
			break;
		}
	}
	return 0;
}