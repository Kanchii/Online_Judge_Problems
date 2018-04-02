#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 100005
#define pb push_back
#define DEBUG(x) cout << #x << " = " << x << endl
#define fst first
#define snd second

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;

typedef long long ll;
typedef unsigned long long ull;

int getPoint(int p, int t){
    return max((3 * p) / 10, p - (p / 250) * t);
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int m = getPoint(a, c);
    int v = getPoint(b, d);
    if(v == m){
        cout << "Tie" << endl;
    } else {
        if(v > m){
            cout << "Vasya" << endl;
        } else {
            cout << "Misha" << endl;
        }
    }

    return 0;
}
