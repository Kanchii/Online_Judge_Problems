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

int k, l, m, n, d;

int solve(int *vet){
	int r = 0;
	for(int i = 1; i <= d; i++){
		if(i % k != 0 and i % l != 0 and i % m != 0 and i % n != 0){
			r++;
		}
	}
	return r;
}

int main(int argc, char const *argv[]){
	cin >> k >> l >> m >> n >> d;
	int vet[d + 1];
	memset(vet, 0, sizeof(vet));
	cout << d - solve(vet) << endl;

	return 0;
}