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

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    if(n <= 2){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    if(n == 3){
        cout << "1 2" << endl << "2 1 3" << endl;
    } else {
        if(n % 2 == 0){
            cout << "2 1 " << n << endl;
            cout << n - 2 << " ";
            for(int i = 2; i <= n - 1; i++){
                cout << i << " ";
            } cout << endl;
        } else {
            cout << "1 " << (n / 2 + 1) << endl;
            cout << n - 1 << " ";
            for(int i = 1; i <= n; i++){
                if(i == (n / 2 + 1)) continue;
                cout << i << " ";
            } cout << endl;
        }
    }

    return 0;
}
