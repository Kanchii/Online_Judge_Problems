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
#define DEBUG(x) cout << #x << " = " << x << endl

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

map<int, int> mapa;

int main(int argc, char const *argv[]){

    int n;
    cin >> n;
    fori(n){
        int x;
        cin >> x;
        mapa[x]++;
    }
    int maxi = 0;
    int cnt = 0;
    for(auto i = mapa.begin(); i != mapa.end(); i++){
        if(i -> second > maxi){
            maxi = i -> second;
        }
        cnt++;
    }
    cout << maxi << " " << cnt << endl;
    return 0;
}
