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

    int n;
    cin >> n;
    ll r = 0;
    vii v;
    fori(n){
        int a, b;
        cin >> a >> b;
        v.pb(ii(a,b));
    }
    int daVez = 0;
    while(daVez < n){
        int i = daVez;
        daVez++;
        r += v[i].first * v[i].second;
        while(daVez < n and v[daVez].second >= v[i].second){
            r += v[daVez].first * v[i].second;
            daVez++;
        }
    }
    prtl(r);

    return 0;
}