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

int main(int argc, char const *argv[]){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, b = 0;
    for(char c : s){
        if(c == 'D'){
            b++;
        } else {
            a++;
        }
    }
    if(a == b){
        prtl("Friendship");
    } else if(a > b){
        prtl("Anton");
    } else {
        prtl("Danik");
    }

    return 0;
}