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
#define prtl(x) cout << x << endl;
#define prt(x) cout << x

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){
    int x;
    cin >> x;
    if(x < 0){
        string s = to_string(x);
        string r1 = "", r2 = "";
        fori(s.size() - 1){
            r1 += s[i];
        }
        fori(s.size()){
            if(i != s.size() - 2){
                r2 += s[i];
            }
        }
        int a = atoi(r1.c_str());
        int b = atoi(r2.c_str());
        prtl(max(a,b));
    } else {
        prtl(x);
    }

    return 0;
}