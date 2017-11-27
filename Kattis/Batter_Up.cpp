#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(int argc, char const *argv[]){

	int n;
	cin >> n;
	int cnt = 0;
	int tot = 0;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		if(a > 0){
			tot += a;
		}
		if(a >= 0){
			cnt++;
		}
	}

	printf("%.6f\n", (tot / (double)cnt));

	return 0;
}