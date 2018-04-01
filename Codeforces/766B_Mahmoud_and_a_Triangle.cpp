#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100
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
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vi vet;
    int f = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        vet.pb(x);
    }
    sort(vet.begin(), vet.end());
    vi v;
    for(int u : vet){
        if(!f){
            v.push_back(u);
            if(v.size() == 3){
                if(v[2] >= v[1] + v[0]){
                    v.erase(v.begin());
                } else {
                    f = 1;
                    break;
                }
            }
        }
    }
    if(f) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}