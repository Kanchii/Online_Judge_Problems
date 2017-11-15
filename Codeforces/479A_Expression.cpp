#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){

	int a, b, c;
	cin >> a >> b >> c;

	int res = -1;

	int sum = a + b + c;
	if(sum > res){
		res = sum;
	}
	int mulab = a * b + c;
	if(mulab > res){
		res = mulab;
	}
	int mulbc = a + b * c;
	if(mulbc > res){
		res = mulbc;
	}
	int mul = a * b * c;
	if(mul > res){
		res = mul;
	}
	int mula = a * (b + c);
	if(mula > res){
		res = mula;
	}
	int last = (a + b) * c;
	if(last > res){
		res = last;
	}

	cout << res << endl;	

	return 0;
}