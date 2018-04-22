#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define DINF (1.0 / 0.0)
#define max(a,b) ((a) > (b) ? (a) : (b))
#define max3(a, b, c) (max((a), max((b), (c))))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define min3(a, b, c) (min((a), min((b), (c))))
#define mp make_pair
#define pb push_back
#define PI (2 * acos(0.0))
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define DEBUG(x) cout << #x << " = " << x << endl
#define fst first
#define snd second
#define endl '\n'

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;
typedef unsigned long long llu;

/*
mmzhr
3
443 497 867 471 195 670 453 413 579 466 553 881 847 642 269 996 666 702 487 209 257 741 974 133 519 453
*/

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    string s;
    cin >> s;
    ll k;
    cin >> k;
    ll maxi = 0;
    ll vet[30];
    for(char c = 'a'; c <= 'z'; c++){
        int x;
        cin >> x;
        vet[c - 'a'] = x;
        maxi = max(maxi, x);
    }
    ll res = 0;
    for(int i = 1; i <= (int)s.size(); i++){
        res += (vet[s[i - 1] - 'a']) * i;
    }
    for(int i = (s.size() + 1); i < (int)(s.size() + 1 + k); i++){
        res += (maxi * i);
    }
    cout << res << endl;

    return 0;
}
