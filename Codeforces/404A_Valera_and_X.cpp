#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define DINF (1.0 / 0.0)
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 100000
#define mp make_pair
#define pb push_back
#define PI (2 * acos(0.0))
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define DEBUG(x) cout << #x << " = " << x << endl
#define fst first
#define snd second
#define endl '\n'

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;
typedef unsigned long long llu;

map<char, int> mapa;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    char mx[305][305];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mx[i][j];
            mapa[mx[i][j]] = 1;
        }
    }
    if(mapa.size() != 2){
        cout << "NO" << endl;
    } else {
        char d = mx[0][0];
        int f = 1;
        for(int i = 0; i < n and f; i++){
            for(int j = 0; j < n and f; j++){
                if((i == j or (n - i - 1) == j)){
                    if(mx[i][j] != d){
                        f = 0;
                    }
                } else {
                    if(mx[i][j] == d){
                        f = 0;
                    }
                }
            }
        }
        if(f){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
