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
    int k = n * n;
    int l = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n / 2; j++){
            if(j) cout << " ";
            cout << l++;
        }
        cout << " ";
        for(int j = 0; j < n/2; j++){
            if(j) cout << " ";
            cout << k--;
        } cout << endl;
    }

    return 0;
}
