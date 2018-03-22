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

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){

    int n, m;
    cin >> n >> m;
    int res = 0;
    int vetA[n + 1], vetB[m + 1];
    fori(n){
        cin >> vetA[i];
    }
    fori(m){
        cin >> vetB[i];
    }
    int i = 0, j = 0;
    int cntA = 0, cntB = 0;
    while(i < n and j < m){
        if(cntA < cntB){
            cntA += vetA[i++];
        } else {
            cntB += vetB[j++];
        }
        if(cntA == cntB){
            res++;
            cntA = 0;
            cntB = 0;
        }
    }
    while(i < n){
        cntA += vetA[i++];
    }
    while(j < m){
        cntB += vetB[j++];
    }
    if(cntA == cntB){
        res++;
    }
    cout << res << endl;

    return 0;
}
