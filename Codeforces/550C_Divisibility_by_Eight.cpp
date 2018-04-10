#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAXN 1010
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

    string s;
    cin >> s;
    int f = 0;
    int r;
    for(int i = 0; i < s.size() and !f; i++){
        for(int j = i; j < s.size() and !f; j++){
            for(int k = j; k < s.size() and !f; k++){
                string res = "";
                res += s[i];
                if(j != i) res += s[j];
                if(k != j) res += s[k];
                int num = atoi(res.c_str());
                if(num % 8 == 0){
                    f = 1;
                    r = num;
                }
            }
        }
    }
    if(f){
        cout << "YES" << endl << r << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
