#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100
#define mp make_pair

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){
	
	int n;
	cin >> n;
	int c[n + 1][2];
	for(int i = 0; i < n; i++){
		cin >> c[i][0] >> c[i][1];
	}
	int r = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i != j){
				if(c[i][0] == c[j][1]){
					r++;
				}
			}
		}
	}
	cout << r << endl;

    return 0;
}