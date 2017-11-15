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
	int a, b;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			int x;
			cin >> x;
			if(x == 1){
				a = i; b = j;
			}
		}
	}

	cout << (abs(a - 2) + abs(b - 2)) << endl;

	return 0;
}