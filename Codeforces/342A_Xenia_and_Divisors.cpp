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

int ri () {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}
int rll () {
	bool minus = false;
	ll result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	int v[10];
	memset(v, 0, sizeof v);
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v[x]++;
	}

	int g = n / 3;
	if(v[1] < g or (v[2] + v[3] < g) or (v[4] + v[6] < g)){
		cout << "-1" << endl;
	} else {
		vector<string> res;
		int cnt_4 = 0;
		int cnt_6 = 0;
		int cnt_3 = 0;
		int cnt_2 = 0;
		int f = 0;
		for(int i = 0; i < g and !f; i++){
			if(cnt_2 < v[2]){
				cnt_2++;
				if(cnt_4 < v[4]){
					cnt_4++;
					res.push_back("1 2 4");
				} else if(cnt_6 < v[6]){
					cnt_6++;
					res.push_back("1 2 6");
				} else {
					f = 1;
				}
			} else if(cnt_3 < v[3]){
				cnt_3++;
				if(cnt_6 < v[6]){
					cnt_6++;
					res.push_back("1 3 6");
				} else {
					f = 1;
				}
			} else {
				f = 1;
			}
		}
		if(f){
			cout << -1 << endl;
		} else {
			for(string s : res){
				cout << s << endl;
			}
		}
	}

    return 0;
}
