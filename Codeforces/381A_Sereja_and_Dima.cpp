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
    int vet[n + 1];
    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }
    int s = 0, d = 0;
    int l = 0, r = n - 1;
    for(int i = 0; i < n; i++){
        if(!(i & 1)){
            if(vet[l] > vet[r]){
                s += vet[l++];
            } else {
                s += vet[r--];
            }
        } else {
            if(vet[l] > vet[r]){
                d += vet[l++];
            } else {
                d += vet[r--];
            }
        }
    }
    cout << s << " " << d << endl;

    return 0;
}
