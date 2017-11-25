#include <bits/stdc++.h>

using namespace std;

#define INF (1LL << 31 - 1)
#define LINF (1LL << 63 - 1)
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

int isvogal(char c){
    return (c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U' or c == 'Y');
}

int main(int argc, char const *argv[]){

    string a;
    cin >> a;
    vi v;
    a += "A";
    a.insert(a.begin(), 'A');
    fori(a.size()){
        if(isvogal(a[i])){
            v.pb(i);
        }
    }
    int maxi = 1;
    forsi(1, v.size()){
        if(v[i] - v[i - 1] > maxi){
            maxi = v[i] - v[i-1];
        }
    }
    prtl(maxi);


    return 0;
}
