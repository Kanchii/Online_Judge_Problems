#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100
#define mp make_pair
#define pb push_back
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define DEBUG(x) cout << #x << " = " << x << endl
#define prtl(x) cout << x << endl;
#define prt(x) cout << x

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int vet[1000100];

int main(int argc, char const *argv[]){
    int n;
    cin >> n;
    int cnt = 1;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        for(int j = cnt; j < cnt + x; j++){
            vet[j] = i + 1;
        }
        cnt += x;
    }
    
    int k;
    cin >> k;
    for(int i = 0; i < k; i++){
        int x;
        cin >> x;
        cout << vet[x] << endl;
    }
    
    
    return 0;
}