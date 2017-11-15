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

	string s;
	int f = 1;
	while(cin >> s){
		if(f){
			f = 0;
		} else {
			cout << " ";
		}
		int ff = 1;
		for(int i = 1; i < s.size(); i++){
			if(islower(s[i])){
				ff = 0;
				break;
			}
		}
		if(!ff){
			cout << s;
		} else {
			for(int i = 0; i < s.size(); i++){
				if(islower(s[i])){
					cout << (char)toupper(s[i]);
				} else {
					cout << (char)tolower(s[i]);
				}
			}
		}
	} cout << endl;

	return 0;
}