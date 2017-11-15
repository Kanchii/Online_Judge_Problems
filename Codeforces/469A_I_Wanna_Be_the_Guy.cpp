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
	int vet[n + 1];
	memset(vet, 0, sizeof(vet));
	int k;
	cin >> k;
	for(int i = 0; i < k; i++){
		int x;
		cin >> x;
		x--;
		vet[x] = 1;
	}
	cin >> k;
	for(int i = 0; i < k; i++){
		int x;
		cin >> x;
		x--;
		vet[x] = 1;
	}
	int i;
	for(i = 0; i < n; i++){
		if(!vet[i]){
			break;
		}
	}
	if(i != n){
		cout << "Oh, my keyboard!" << endl;
	} else {
		cout << "I become the guy." << endl;
	}
	return 0;

}