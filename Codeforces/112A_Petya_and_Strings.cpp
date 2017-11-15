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

	string a, b;
	cin >> a >> b;
	for(int i = 0; i < a.size(); i++){
		a[i] = tolower(a[i]);
	}
	for(int i = 0; i < b.size(); i++){
		b[i] = tolower(b[i]);
	}

	if(a < b){
		cout << "-1" << endl;
	} else if(a > b){
		cout << "1" << endl;
	} else {
		cout << "0" << endl;
	}

	return 0;
}