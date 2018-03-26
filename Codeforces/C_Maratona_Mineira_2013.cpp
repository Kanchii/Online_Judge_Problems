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
    int n;
    cin >> n;
    while(n--){
        int k;
        cin >> k;
        int res = 0;
        deque<int> dq;
        int sum = 0;
        for(int i = 0; i < k; i++){
            int x;
            cin >> x;
            dq.push_back(x);
            sum += x;
            while(sum > 42){
                sum -= dq.front();
                dq.pop_front();
            }
            if(sum == 42){
                res++;
                dq.clear();
                sum = 0;
            }
        }
        cout << res << endl;
    }

    return 0;
}
