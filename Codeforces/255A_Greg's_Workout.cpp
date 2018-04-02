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

    int vet[3];
    memset(vet, 0, sizeof vet);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        vet[i % 3] += x;
    }
    if(vet[0] > vet[1] and vet[0] > vet[2]){
        cout << "chest" << endl;
    } else if(vet[1] > vet[0] and vet[1] > vet[2]){
        cout << "biceps" << endl;
    } else {
        cout << "back" << endl;
    }

    return 0;
}
