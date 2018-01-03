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
	
	string s;
	cin >> s;
	int r, l;
	if(s.size() % 2 == 0){
		r = s.size() / 2;
		l = r - 1;
		int cnt = 0;
		while(l >= 0){
			if(s[l] != s[r]){
				cnt++;
			}
			l--; r++;
		}
		if(cnt == 0 or cnt > 1){
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	} else {
		r = s.size() / 2 + 1;
		l = r - 2;
		int cnt = 0;
		while(l >= 0){
			if(s[l] != s[r]){
				cnt++;
			}
			l--; r++;
		}
		if(cnt > 1){
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
}