#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100
#define mp make_pair

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){
	
	queue<pair<string, ll> > fila;
	fila.push(mp("Sheldon", 1));
	fila.push(mp("Leonard", 1));
	fila.push(mp("Penny", 1));
	fila.push(mp("Rajesh", 1));
	fila.push(mp("Howard", 1));

	int k;
	cin >> k;
	pair<string, ll> daVez;
	while(k > 0){
		daVez = fila.front();
		k -= daVez.second;
		fila.pop();
		fila.push(mp(daVez.first, 2 * daVez.second));
	}
	cout << daVez.first << endl;

}