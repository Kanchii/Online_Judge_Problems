#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int solve(int a, int b, int c){

	int res = 0;
	for(int i = 0; res < c; i++){
		if(i % 2 == 0){
			res += a;
		} else {
			res += b;
		}
		if(res == c){
			return 1;
		}
	}
	return 0;

}

int main(int argc, char const *argv[]){

	int s;
	cin >> s;
	cout << s << ":" << endl;
	for(int i = 2; i <= ceil(s/2.0); i++){
		for(int j = i - 1; j <= i; j++){
			if(solve(i, j, s)){
				cout << i << "," << j << endl;
			}
		}
	}

	return 0;
}