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
	
	string x;
	cin >> x;
	for(char c : x){
		c = tolower(c);
		if(c != 'a' and c != 'e' and c != 'i' and c != 'o' and c != 'u' and c != 'y'){
			cout << "." << c;
		}
	} cout << endl;

	return 0;
}