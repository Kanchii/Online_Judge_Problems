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

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    int flag = 1;
    int vet[] = {1, 1, 0};
    while(t--){
        int x;
        cin >> x;
        x--;
        if(vet[x] == 0) flag = 0;
        else {
            for(int i = 0; i < 3; i++){
                if(i == x) continue;
                vet[i] = (vet[i] == 0 ? 1 : 0);
            }
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
