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

int main(int argc, char const *argv[]){
    
    int n;
    cin >> n;
    vi v1, v2, v3;
    fori(n){
        int x;
        cin >> x;
        if(x == 1){
            v1.pb(i + 1);
        } else if(x == 2){
            v2.pb(i + 1);
        } else {
            v3.pb(i + 1);
        }
    }

    int mini = min(v1.size(), min(v2.size(), v3.size()));
    prtl(mini);
    fori(mini){
        cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
    }

    return 0;
}