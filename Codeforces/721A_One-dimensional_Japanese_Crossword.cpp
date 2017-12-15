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

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

vector<ll> p;

void sieve(){
    bitset<MAX> pr;
    pr.set();
    pr[0] = pr[1] = 0;
    p.push_back(2);
    for(ll i = 4; i <= MAX; i += 2){
        pr[i] = 0;
    }
    for(ll i = 3; i <= MAX; i += 2){
        if(pr[i]){
            for(ll j = i * i; j <= MAX; j += 2){
                pr[j] = 0;
            }
        }
    }
}

int main(int argc, char const *argv[]){

    int n;
    string s;
    cin >> n;
    cin >> s;
    int cnt = 0;
    vi v;
    for(char c : s){
        if(c == 'B'){
            cnt++;
        } else if(cnt > 0){
            v.pb(cnt);
            cnt = 0;
        }
    }
    if(cnt > 0){
        v.pb(cnt);
    }
    if(v.empty()){
        cout << 0 << endl;
    } else {
        cout << v.size() << endl;
        fori(v.size()){
            if(i){
                cout << " ";
            }
            cout << v[i];
        } cout << endl;
    }

    return 0;
}