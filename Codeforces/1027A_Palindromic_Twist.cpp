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

int xx[] = {1, 1, -1, -1};
int yy[] = {-1, 1, -1, 1};

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int r = n - 1, l = 0;
        int flag = 1;
        while(l < r and flag){
            int f = 0;
            for(int i = 0; i < 4; i++){
                int a = s[l] + xx[i];
                int b = s[r] + yy[i];
                if(a == b) f = 1;
            }
            if(!f) flag = 0;
            l++;
            r--;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
