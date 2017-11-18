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
#define DEBUG(x) cout << #x << " = " << x << endl
#define prtl(x) cout << x << endl;
#define prt(x) cout << x

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int n, m;

string A, B;

int dp[110][1000];

int solveA(int pos, int sum){
    if(sum > m){
        return 0;
    }
    if(pos == n){
        if(sum == m){
            return 1;
        }
        return 0;
    }
    if(dp[pos][sum] != -1){
        return dp[pos][sum];
    }
    for(int i = (pos == 0); i < 10; i++){
        if(solveA(pos + 1, sum + i)){
            A += (i + '0');
            return 1;
        }
    }
    return dp[pos][sum] = 0;
}

int solveB(int pos, int sum){
    if(sum > m){
        return 0;
    }
    if(pos == n){
        if(sum == m){
            return 1;
        }
        return 0;
    }
    if(dp[pos][sum] != -1){
        return dp[pos][sum];
    }
    for(int i = 9; i >= 0; i--){
        if(i == 0 and pos == 0){
            break;
        }
        if(solveB(pos + 1, sum + i)){
            B += (i + '0');
            return 1;
        }
    }
    return dp[pos][sum] = 0;

}

int main(int argc, char const *argv[]){

    cin >> n >> m;
    if(n == 1 and m == 0){
        cout << "0 0" << endl;
    } else {
        A = "", B = "";
        memset(dp, -1, sizeof(dp));
        solveA(0, 0);
        memset(dp, -1, sizeof(dp));
        solveB(0, 0);
        if(A != ""){
            reverse(A.begin(), A.end());    
        }
        if(B != ""){
            reverse(B.begin(), B.end());
        }
        if(A == ""){
            A = "-1";
        }
        if(B == ""){
            B = "-1";
        }
        cout << A << " " << B << endl;
    }

    return 0;
}