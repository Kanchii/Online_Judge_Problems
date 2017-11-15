#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int vet[300];

int main(int argc, char const *argv[]){
	string s;
	cin >> s;
	int r = 0;
	for(char c : s){
		if(!vet[c]){
			r++;
			vet[c]++;
		}
	}
	printf("%s\n", (r % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!"));

	return 0;
}