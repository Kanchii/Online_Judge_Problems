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

	vector<int> vet;
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i += 2){
		vet.push_back(s[i] - '0');
	}
	sort(vet.begin(), vet.end());
	for(int i = 0; i < vet.size(); i++){
		if(i){
			cout << "+";
		}
		cout << vet[i];
	} cout << endl;

	return 0;
}