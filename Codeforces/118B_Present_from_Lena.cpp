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

void space(int u, int n){
    for(int i = 0; i < ((n - u) * 2); i++){
        cout << " ";
    }
}

void numbers(int u, int n){
    for(int i = 0; i <= u - 1; i++){
        if(i) cout << " ";
        cout << i;
    }
    if(u){
        cout << " " << u << " ";
    } else {
        cout << u;
    }
    for(int i = u - 1; i >= 0; i--){
        if(i != u - 1) cout << " ";
        cout << i;
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    for(int i = 0; i <= n; i++){
        space(i, n);
        numbers(i, n);
        cout << endl;
    }
    for(int i = n - 1; i >= 0; i--){
        space(i, n);
        numbers(i, n);
        cout << endl;
    }

    return 0;
}
