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
    cin >> n;
    int f = 1;
    int ps = 0;
    int cnt = 0;
    if(n % 2 == 0){
        cnt = n / 2;
    } else {
        cnt = (n - 3) / 2 + 1;
    }
    cout << cnt << endl;
    if(n % 2 == 0){
        int f = 1;
        while(n > 0){
            if(f){
                f = 0;
                cout << 2;
            } else {
                cout << " 2"; 
            }
            n -= 2;
        } cout << endl;
    } else {
        n -= 3;
        int f = 1;
        while(n > 0){
            if(f){
                f = 0;
                cout << 2;
            } else {
                cout << " 2"; 
            }
            n -= 2;
        }
        if(f){
            cout << 3 << endl;
        } else {
            cout << " 3" << endl;
        }
    }


    return 0;
}