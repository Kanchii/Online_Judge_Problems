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

string aux = "abcdefghijklmnopqrstuvwxyz";

int solve(int pos, int cnt, char obj){
    int o = obj - 'a';
    int l = 0;
    int r = 'z' - 'a';
    int c = 0;
    while(pos != o){
        pos += cnt;
        if(pos > r){
            pos = 0;
        } else if(pos < l){
            pos = r;
        }
        c++;
    }
    return c;
}

int main(int argc, char const *argv[]){
    int pos = 0;
    string s;
    cin >> s;
    int res = 0;
    for(int i = 0; i < s.size(); i++){
        char daVez = s[i];
        res += min(solve(pos, -1, daVez), solve(pos, 1, daVez));
        pos = daVez - 'a';
    }
    cout << res << endl;

    return 0;
}