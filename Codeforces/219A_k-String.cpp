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

	int k;
	cin >> k;
	string s;
	cin >> s;
	int vet[30];
	memset(vet, 0, sizeof(vet));
	for(int i = 0; i < s.size(); i++){
		int aux = s[i] - 'a';
		vet[aux]++;
	}
	int ok = 1;
	for(int i = 0; i < 30; i++){
		if(vet[i] > 0){
			if(vet[i] % k != 0){
				ok = 0;
				break;
			}
		}
	}
	if(!ok){
		cout << "-1" << endl;
	} else {
		string res = "";
		for(int i = 0; i < 30; i++){
			if(vet[i] > 0){
				int tot = vet[i] / k;
				while(tot--){
					res += (char)('a' + i);
				}
			}
		}
		for(int i = 0; i < k; i++){
			cout << res;
		} cout << endl;
	}

} 