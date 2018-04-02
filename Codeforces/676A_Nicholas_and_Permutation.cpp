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

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int posM, posMe;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 1){
            posMe = i;
        } else if(x == n){
            posM = i;
        }
    }

    if(posM == 0 or posM == n - 1 or posMe == 0 or posMe == n - 1){
        cout << (n - 1) << endl;
    } else {
        cout << max((posM), max(posMe, max((n - 1) - posM, (n - 1) - posMe))) << endl;
    }

    return 0;
}
