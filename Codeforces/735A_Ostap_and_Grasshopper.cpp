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

int vet[110];
int vis[110];
int n, k;

int possible(int pos){
	return (pos < n and pos >= 0 and !vis[pos] and vet[pos] != -1);
}

int solve(int daVez, int dest){
	vis[daVez] = 1;
	if(daVez == dest){
		return 1;
	}
	if(possible(daVez + k)){
		if(solve(daVez + k, dest)){
			return 1;
		}
	}
	if(possible(daVez - k)){
		if(solve(daVez - k, dest)){
			return 1;
		}
	}
	vis[daVez] = 0;
	return 0;
}

int main(int argc, char const *argv[]){
	cin >> n >> k;
	string s;
	cin >> s;
	int start, end;
	for(int i = 0; i < (int)s.size(); i++){
		char c = s[i];
		vet[i] = (c == 'G' ? 1 : (c == 'T' ? 2 : (c == '.' ? 0 : -1)));
		if(c == 'G'){
			start = i;
		} else if(c == 'T'){
			end = i;
		}
	}
	
	if(solve(start, end)){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

}