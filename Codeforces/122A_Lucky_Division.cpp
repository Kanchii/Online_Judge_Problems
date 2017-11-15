#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

bool solve(int x, string daVez){
	if(daVez != ""){
		if(atoi(daVez.c_str()) > x){
			return false;
		}
		if(x % atoi(daVez.c_str()) == 0){
			return true;
		}
	}

	return (solve(x, daVez + "4") or solve(x, daVez + "7"));

}

int main(int argc, char const *argv[]){
	
	int x;
	cin >> x;
	if(solve(x, "")){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}