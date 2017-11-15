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

int vet[3];

int main(int argc, char const *argv[]){
	
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			int x;
			cin >> x;
			vet[j] += x;
		}
	}
	int f = 1;
	for(int i = 0; i < 3; i++){
		if(vet[i] != 0){
			f = 0;
		}
	}
	if(f){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}