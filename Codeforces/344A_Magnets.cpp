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
	
	int n;
	cin >> n;
	int r = 1;
	string x;
	cin >> x;
	string ant = x;
	for(int i = 1; i < n; i++){
		cin >> x;
		if(x != ant){
			r++;
		}
		ant = x;
	}
	cout << r << endl;

}