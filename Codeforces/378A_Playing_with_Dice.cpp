#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 100000
#define mp make_pair
#define pb push_back
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define fork(n) for(int k = 0; k < n; k++)
#define forsk(s, n) for(int k = s; k < n; k++)
#define DEBUG(x) cout << #x << " = " << x << endl
#define fst first
#define snd second

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;
    int vet[3];
    memset(vet, 0, sizeof vet);
    for(int i = 1; i <= 6; i++){
        int d1 = abs(a - i);
        int d2 = abs(b - i);
        if(d1 < d2){
            vet[0]++;
        } else if(d1 > d2){
            vet[2]++;
        } else {
            vet[1]++;
        }
    }
    for(int i = 0; i < 3; i++){
        if(i) cout << " ";
        cout << vet[i];
    } cout << endl;

    return 0;
}
