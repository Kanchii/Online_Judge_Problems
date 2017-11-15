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
	for(int i = 0; i < n; i++){
		cin >> vet[i];
	}
	int r = 0;
	int tam = 1;
	for(int i = 1; i < n; i++){
		if(vet[i] >= vet[i - 1]){
			tam++;
		} else {
			r = max(r, tam);
			tam = 1;
		}
	}
	r = max(r, tam);
	cout << r << endl;

	return 0;
}