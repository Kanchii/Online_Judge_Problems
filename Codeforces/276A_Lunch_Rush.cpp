#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 100005
#define pb push_back
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
    int n, k;
    cin >> n >> k;
    int maxi = -INF;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        if(y > k){
            maxi = max(maxi, x - (y - k));
        } else {
            maxi = max(maxi, x);
        }
    }
    cout << maxi << endl;
    return 0;
}
