#include <bits/stdc++.h>

using namespace std;

#define INF ((1 << 30) - 1)
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 100000
#define mp make_pair
#define pb push_back
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define DEBUG(x) cout << #x << " = " << x << endl

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	int res = 0;
	int ant = -1;
	int maxi = 0;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		if(x > ant){
			res++;
		} else {
			maxi = max(maxi, res);
			res = 1;
		}
		ant = x;
	}
	maxi = max(maxi, res);
	cout << maxi << endl;

    return 0;
}
