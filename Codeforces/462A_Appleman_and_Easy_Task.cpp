#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAXN 100005
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

int n;
char matriz[101][101];

int isEven(int a, int b){
    int xi[4] = {0, 0, 1, -1};
    int xj[4] = {-1, 1, 0, 0};
    int res = 0;
    for(int i = 0; i < 4; i++){
        int aa = a + xi[i];
        int bb = b + xj[i];
        if(aa >= 0 and bb >= 0 and aa < n and bb < n and matriz[aa][bb] == 'o'){
            res++;
        }
    }
    return (res % 2 == 0);
}

int solve(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!isEven(i, j)){
                return 0;
            }
        }
    }
    return 1;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }
    if(solve()){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
