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
    if(n & 1){
        cout << (n * n + 1) / 2 << endl;
    } else {
        cout << (n * n) / 2 << endl;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i & 1){
                if(j & 1){
                    cout << "C";
                } else {
                    cout << ".";
                }
            } else {
                if(j & 1){
                    cout << ".";
                } else {
                    cout << "C";
                }
            }
        } cout << endl;
    }

    return 0;
}
