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

string s;

int solve(int p, int sts){
    if(p >= s.size()){
        return 1;
    }
    if(sts == 0){
        if(s[p] != '1'){
            return 0;
        }
        sts = 1;
        return solve(p + 1, sts);
    } else if(sts == 1){
        if(s[p] != '4' and s[p] != '1'){
            return 0;
        }
        if(s[p] == '4'){
            sts = 2;
        }
        return solve(p + 1, sts);
    } else {
        if(s[p] != '4' and s[p] != '1'){
            return 0;
        }
        if(s[p] == '4'){
            sts = 0;
        } else {
            sts = 1;
        }
        return solve(p + 1, sts);
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int status = 0;
    cin >> s;

    if(solve(0, status)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
