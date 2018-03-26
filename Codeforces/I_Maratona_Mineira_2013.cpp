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

string alf = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

ll toint(string a){
    ll res = 0;
    reverse(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++){
        if(a[i] >= '0' and a[i] <= '9'){
            res += (a[i] - '0') * pow(36, i);
        } else {
            res += (a[i] - 'A' + 10) * pow(36, i);
        }
    }
    return res;
}

string tostr(ll cc){

    string res = "";
    while(cc > 0){
        res += alf[(cc % 36)];
        cc /= 36;
    }
    reverse(res.begin(), res.end());
    return res;
}

string solve(string a, string b){

    ll aa = toint(a);
    ll bb = toint(b);
    ll cc = aa + bb;
    return tostr(cc);

}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    string a, b;
    while(cin >> a >> b and (a != "0" or b != "0")){
        cout << solve(a, b) << endl;
    }

    return 0;
}
