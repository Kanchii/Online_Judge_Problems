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
    int f = 1;
    string res = "";
    while(res.size() < 1000){
        res += to_string(f++);
    }
    int n;
    cin >> n;
    n--;
    cout << res[n] << endl;
    return 0;
    cout << "teste";
}
