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

map<string, int> mapa;

int main(int argc, char const *argv[]){

    string s;
    cin >> s;
    mapa[s] = 1;
    int res = 1;

    for(int i = 0; i < (int)(s.size() - 1); i++){
        char o = s[s.size() - 1];
        s.erase(s.begin() + (s.size() - 1));
        string other = o + s;
        if(mapa[other] == 0){
            mapa[other] = 1;
            res++;
        }
        s = other;
    }
    cout << res << endl;

    return 0;
}
