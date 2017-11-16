#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100

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
		if(a[i] == b[i]){
			cout << "0";
		} else {
			cout << "1";
		}
	} cout << endl;

}