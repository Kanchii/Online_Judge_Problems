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

int isvogal(char c){
    return (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u');
}

int isodd(char c){
    return (c == '1' or c == '3' or c == '5' or c == '7' or c == '9');
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    string s;
    cin >> s;
    int res = 0;
    for(char c : s){
        if(isvogal(c) or isodd(c)){
            res++;
        }
    }
    cout << res << endl;
    return 0;
}
