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
#define prtl(x) cout << x << endl;
#define prt(x) cout << x

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){
    
    int n, m;
    cin >> n >> m;
    
    ll aux1 = n - (m - 1);

    ll maxi = aux1 * (aux1 - 1) / 2;
    ll acima = n % m;
    ll abaixo = m - acima;
    ll res = floor(n / (double)m);
    ll mini = ((res + 1) * (res) / 2) * acima + ((res) * (res - 1) / 2) * abaixo;
    cout << mini << " " << maxi << endl;

    return 0;
}