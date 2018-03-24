#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAXN 500010
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
typedef unsigned long long ull;

int vet[30] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int vett[n + 1];
    for(int i = 0; i < n; i++){
        cin >> vett[i];
    }
    if(n == 0 or (n == 1 and vett[0] != 15 and vett[0] != 0)){
        cout << -1 << endl;
    } else {
        if(n == 1){
            if(vett[0] == 15){
                cout << "DOWN" << endl;
            } else {
                cout << "UP" << endl;
            }
        } else {
            int f = vett[n - 2];
            int s = vett[n - 1];
            int p, pp, ppp;
            if(f > s){
                pp = (30 - f + 1) % 30;
                ppp = (pp + 1) % 30;
            } else {
                pp = s;
                ppp = (s + 1) % 30;
            }
            if(vet[pp] > vet[ppp]){
                cout << "DOWN" << endl;
            } else {
                cout << "UP" << endl;
            }
        }
    }

    return 0;
}
