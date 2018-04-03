#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 100005
#define MOD 1000000007
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

int sum[70];

int muda_val(char c){
    if(c >= '0' and c <= '9'){
        return (c - '0');
    } else if(c >= 'A' and c <= 'Z'){
        return (c - 'A' + 10);
    } else if(c >= 'a' and c <= 'z'){
        return (c - 'a' + 36);
    } else if(c == '-'){
        return 62;
    }
    return 63;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    for(int i = 0; i < 64; i++){
        for(int j = 0; j < 64; j++){
            sum[i & j]++;
        }
    }
    string s;
    cin >> s;
    ll res = 1;
    for(int i = 0; i < s.size(); i++){
        res = ((res % MOD) * (sum[muda_val(s[i])] % MOD)) % MOD;
    }
     cout << res << endl;

    return 0;
}
