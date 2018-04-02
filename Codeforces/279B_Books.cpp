#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 100005
#define mp make_pair
#define pb push_back
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define fork(n) for(int k = 0; k < n; k++)
#define forsk(s, n) for(int k = s; k < n; k++)
#define DEBUG(x) cout << #x << " = " << x << endl
#define fst first
#define snd second

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int vet[MAX];
int n, t;

int solve(int pos){
    int l = pos + 1, r = n - 1;
    int mid = pos;
    int acc = 0;
    while(l <= r){
        mid = (l + r) / 2;
        acc = (vet[mid] - (pos == 0 ? 0 : vet[pos - 1]));
        if(acc == t){
            return (mid - pos + 1);
        } else {
            if(acc > t){
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
    }
    if(acc > t){
        return (r - pos + 1);
    }
    return (mid - pos + 1);
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin >> n >> t;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(!i){
            vet[i] += x;
        } else {
            vet[i] = vet[i - 1] + x;
        }
    }

    int res = 0;
    for(int i = 0; i < n; i++){
        if(!i and vet[i] >= t){
            continue;
        } else if(i and vet[i] - vet[i - 1] >= t){
            continue;
        }
        int tmp = solve(i);
        if(tmp > res){
            res = tmp;
        }
    }
    cout << res << endl;
    return 0;
}
