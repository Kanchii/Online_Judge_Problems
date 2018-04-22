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
#define DEBUG(x) cout << #x << " = " << x << endl

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    string s;
    cin >> s;
    string res = "";
    for(int i = (int)(s.size() - 2); i >= 0; i--){
        int c = (s[i] - '0');
        if(c % 2 == 0){
            if(res == ""){
                swap(s[i], s[s.size() - 1]);
                res = s;
                swap(s[i], s[s.size() - 1]);
            } else {
                if((c + '0') <= s[s.size() - 1]){
                    swap(s[i], s[s.size() - 1]);
                    res = s;
                    swap(s[i], s[s.size() - 1]);
                }
            }
        }
    }
    if(res == ""){
        cout << (int)-1 << endl;
    } else {
        cout << res << endl;
    }

    return 0;
}
