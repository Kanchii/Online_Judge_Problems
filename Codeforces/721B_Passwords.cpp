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

	int n, m;
	cin >> n >> m;
	vector<vector<string> > vet(110);
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		vet[s.size()].push_back(s);
	}
	string obj;
	cin >> obj;

	int sz = (int)obj.size();
	int lower = 0;
	int high = 0;
	int cnt = 0;
	for(int i = 1; i < 110; i++){
		if(i == sz){
			lower++;
			for(int j = 0; j < (int)vet[i].size(); j++){
				high++;
				if(j == vet[i].size() - 1){
					break;
				}
				cnt++;
				if(cnt % m == 0){
					high += 5;
				}
			}
			break;
		} else {
			for(int j = 0; j < (int)vet[i].size(); j++){
				lower++;
				high++;
				cnt++;
				if(cnt % m == 0){
					lower += 5;
					high += 5;
				}
			}
		}
	}
	cout << lower << " " << high << endl;
} 