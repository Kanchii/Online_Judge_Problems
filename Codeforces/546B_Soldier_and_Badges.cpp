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
    int n;
    cin >> n;
    vi v;
    int vet[n * 2 + 10];
    memset(vet, 0, sizeof vet);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.pb(x);
        vet[x]++;
    }
    sort(v.rbegin(), v.rend());
    int res = 0;
    for(int i = 0; i < n; i++){
        if(vet[v[i]] > 1){
            int cnt = vet[v[i]] - 1;
            vet[v[i]] = 1;
            int daVez = v[i];
            while(cnt > 0){
                res += cnt;
                daVez++;
                if(vet[daVez] == 0){
                    cnt--;
                    vet[daVez] = 1;
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}
