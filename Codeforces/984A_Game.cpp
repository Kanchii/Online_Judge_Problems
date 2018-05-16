#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.emplace_back(x);
	}
	sort(v.begin(), v.end());

	if(n & 1){
		int mid = n / 2;
		cout << v[mid] << endl;
	} else {
		int mid = n / 2 - 1;
		cout << v[mid] << endl;
	}

	return 0;
}
