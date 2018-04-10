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

    int n;
    cin >> n;
    int vet[n + 1];
    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }
    int mini = INF;
    for(int i = 1; i < n - 1; i++){
        int maxi = 0;
        for(int j = 1; j < n; j++){
            if(i == j) continue;
            if(j - 1 == i){
                maxi = max(maxi, vet[j] - vet[i - 1]);
            } else {
                maxi = max(maxi, vet[j] - vet[j - 1]);
            }
        }
        mini = min(mini, maxi);
    }
    cout << mini << endl;

    return 0;
}
