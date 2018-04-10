#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAXN 1010
#define MOD 1000000007
#define pb push_back
#define pu push
#define DEBUG(x) cout << #x << " = " << x << endl
#define fst first
#define snd second

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;

typedef long long ll;
typedef unsigned long long ull;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    int vet[1200];
    memset(vet, 0, sizeof vet);
    vet[1] = vet[2] = 1;
    int a = 1, b = 2, c;

    while(a < 1000){
        c = a + b;
        vet[c] = 1;
        a = b;
        b = c;
    }

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        if(vet[i + 1] == 1){
            cout << "O";
        } else {
            cout << "o";
        }
    } cout << endl;

    return 0;
}
