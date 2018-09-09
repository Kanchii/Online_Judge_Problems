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


int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int vs, vf, t, d;
    cin >> vs >> vf >> t >> d;
    int v = vs;
    int r = 0;
    for(int i = 0; i < t; i++){
        r += v;
        // cout << v << endl;
        int flag = 0;
        int tmp;
        for(int j = 0; j <= d; j++){
            int vv = v + j;
            double aux = fabs((vf - vv) / (double)d);
            // cout << aux << " " << t - i - 1 << endl;
            if(aux > t - i - 2){
                // cout << "oi" << endl;
                // break;
                continue;
            } else {
                tmp = vv;
                flag = 1;
            }
        }
        if(!flag){
            for(int j = -1; j >= -d; j--){
                int vv = v + j;
                double aux = fabs((vf - vv) / (double)d);
                if(aux <= t - i - 2){
                    v = vv;
                    break;
                }
            }
        } else {
            v = tmp;
        }
    }
    cout << r << endl;

    return 0;
}
