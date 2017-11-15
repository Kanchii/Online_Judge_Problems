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
	int maxi = -1;
	int mini = INF;
	int pma = 0, pmi = 0;
	for(int i = 0; i < n; i++){
		cin >> vet[i];
		if(vet[i] > maxi){
			maxi = vet[i];
			pma = i;
		}
		if(vet[i] <= mini){
			mini = vet[i];
			pmi = i;
		}
	}
	
	if(pma > pmi){
		cout << (pma + (n - 1 - pmi) - 1) << endl;
	} else {
		cout << (pma + (n - 1 - pmi)) << endl;
	}

	return 0;
}