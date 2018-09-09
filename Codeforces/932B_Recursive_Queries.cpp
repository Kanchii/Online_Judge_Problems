#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string.h>

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

int dp[1234567];
int pref[1234567][10];

void somaPref(int i, int k){
    for(int j = 1; j <= 9; j++){
        pref[i][j] = pref[i - 1][j];
    }
    pref[i][k]++;
}

int applyF(int i){
    int res = 1;
    while(i > 0){
        int aux = i % 10;
        i /= 10;
        if(aux > 0) res *= aux;
    }
    return res;
}

void pre(){
    for(int i = 10; i <= 1e6; i++){
        int k = dp[applyF(i)];
        dp[i] = k;
        somaPref(i, k);
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i = 1; i <= 9; i++){
        dp[i] = i;
        somaPref(i, i);
    }
    pre();
    int n;
    cin >> n;
    while(n--){
        int a, b, c;
        cin >> a >> b >> c;
        // for(int i = 1; i <= 9; i++){
        //     cout << pref[a][i] << " " << pref[b][i] << endl;
        // }
        cout << pref[b][c] - pref[a - 1][c] << endl;
    }

    return 0;
}
