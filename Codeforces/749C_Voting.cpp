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
#define fork(n) for(int k = 0; k < n; k++)
#define forsk(s, n) for(int k = s; k < n; k++)
#define DEBUG(x) cout << #x << " = " << x << endl
#define fst first
#define snd second

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

vector<ll> v;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    int n; cin >> n;
    string s; cin >> s;
    list<char> lc;
    int d = 0, r = 0, nd = 0, nr = 0;
    for(char c : s){
        lc.push_back(c);
        if(c == 'D') nd++;
        else         nr++;
    }
    while(nd != 0 && nr != 0){
        for(auto it = lc.begin(); it != lc.end();){
            char c = *it;
            if(c == 'D'){
                if(d >= 0){
                    r--;
                    it++;
                }
                else{
                    nd--;
                    it = lc.erase(it);
                    d++;
                }
            }
            else{
                if(r >= 0){
                    d--;
                    it++;
                }
                else{
                    nr--;
                    it = lc.erase(it);
                    r++;
                }
            }
        }

    }
    if(nd > 0) cout << "D" << endl;
    else       cout << "R" << endl;

    return 0;
}
