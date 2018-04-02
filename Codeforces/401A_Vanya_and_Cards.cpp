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

    int sum = 0;
    int n, x;
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        int y;
        cin >> y;
        sum += y;
    }
    int res = 0;
    while(sum != 0){
        if(sum < 0){
            int aux = -sum;
            if(aux > x){
                sum += x;
            } else {
                sum = 0;
            }
            res++;
        } else {
            if(sum > x){
                sum -= x;
            } else {
                sum = 0;
            }
            res++;
        }
    }
    cout << res << endl;

    return 0;
}
