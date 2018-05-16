#include <bits/stdc++.h>

using namespace std;

char mx[110][110];
int n, m;

int valid(int x, int y){
	int cnt = 0;
	for(int i = -1; i <= 1; i++){
		for(int j = -1; j <= 1; j++){
			if(!i and !j) continue;
			int xx = x + i;
			int yy = y + j;
			if(xx >= 0 and xx < n and yy >= 0 and yy < m){
				if(mx[xx][yy] == '*') cnt++;
			}
		}
	}
	if(mx[x][y] == '.'){
		if(cnt > 0) return 0;
	} else {
		if(mx[x][y] != (cnt + '0')) return 0;
	}
	return 1;
}

int main(){
	cin >> n >> m;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> mx[i][j];
		}
	}

	int f = 1;
	for(int i = 0; i < n and f; i++){
		for(int j = 0; j < m and f; j++){
			if(mx[i][j] != '*'){
				if(!valid(i, j)) f = 0;
			}
		}
	}

	if(f) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}
