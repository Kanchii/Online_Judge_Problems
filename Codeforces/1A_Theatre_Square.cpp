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
	
	ll a, b, c;
    cin >> a >> b >> c;
    ll res = 0;
    res += ceil(a / (double)c);
    res *= ceil(b / (double)c);
    cout << res << endl;

	return 0;
}