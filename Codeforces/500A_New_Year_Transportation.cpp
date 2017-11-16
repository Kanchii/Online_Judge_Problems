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
	
	int n, m;
    cin >> n >> m;
    int vet[n + 1];
    for(int i = 0; i < n - 1; i++){
        cin >> vet[i];
    }
    int pos = 0;
    m--;
    while(pos < m){
        pos += vet[pos];
    }
    if(pos == m){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}