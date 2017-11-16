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

bitset<MAX + 100> p;

void sieve(){
	p.set();
	for(ll i = 4; i <= MAX; i += 2){
		p[i] = 0;
	}
	for(ll i = 3; i <= MAX; i += 2){
		if(p[i]){
			for(ll j = i * i; j <= MAX; j += i){
				p[j] = 0;
			}
		}
	}

}

int main(int argc, char const *argv[]){

	int x;
	cin >> x;
	sieve();
	int l = 2;
	int u = x - l;
	while(true){
		if(!p[l] and !p[u]){
			cout << l << " " << u << endl;
			break;
		}
		l++;
		u--;
	}

}