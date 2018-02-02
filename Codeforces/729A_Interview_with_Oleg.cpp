#include <bits/stdc++.h>

using namespace std;

#define INF (1LL << 31 - 1)
#define LINF (1LL << 63 - 1)
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100
#define mp make_pair
#define pb push_back
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define DEBUG(x) cout << #x << " = " << x << endl
#define prtl(x) cout << x << endl;
#define prt(x) cout << x

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string res = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'o'){
            int ogo = 0;
            int d = 0;
            int last = i;
            for(int j = i + 1; j < s.size(); j++){
                if(!d){
                    if(s[j] == 'g'){
                        d = 1;
                    } else {
                        break;
                    }
                } else {
                    if(s[j] == 'o'){
                        d = 0;
                        ogo = 1;
                        last = j;
                    } else {
                        break;
                    }
                }
            }
            if(ogo){
                res += "***";
                i = last;
            } else {
                res += s[i];
            }
        } else {
            res += s[i];
        }
    }
    cout << res << endl;

    return 0;
}
