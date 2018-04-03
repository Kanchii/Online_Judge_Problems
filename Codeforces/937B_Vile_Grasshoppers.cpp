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

    int p, y;
    cin >> p >> y;
    for(int i = y; i > p; i--){
        int root = sqrt(i);
        int f = 1;
        for(int j = 2; j <= root; j++){
            if(i % j == 0 and j <= p){
                f = 0;
            }
        }
        if(f){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}
