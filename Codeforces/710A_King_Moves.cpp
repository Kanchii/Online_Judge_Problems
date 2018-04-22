#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define DINF (1.0 / 0.0)
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 100000
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

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    char a, b;
    cin >> a >> b;
    if(a != 'a' and a != 'h' and b != '1' and b != '8'){
        cout << 8 << endl;
    } else {
        if((a == 'a' or a == 'h') and (b == '1' or b == '8')){
            cout << 3 << endl;
        } else {
            cout << 5 << endl;
        }
    }

    return 0;
}
