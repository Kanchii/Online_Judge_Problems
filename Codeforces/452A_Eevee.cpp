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

int main(int argc, char const *argv[]){ 

    string vet[8] = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    string s;
    int n;
    cin >> n;
    cin >> s;
    int maxi = -1;
    string res;
    for(int i = 0; i < 8; i++){
        string daVez = vet[i];
        if(daVez.size() == n){
            int cnt = 0;
            for(int j = 0; j < s.size() and j < daVez.size(); j++){
                if(daVez[j] == s[j]){
                    cnt++;
                }
            }
            if(cnt > maxi){
                maxi = cnt;
                res = daVez;
            }
        }
    }
    cout << res << endl;

    return 0;
}
