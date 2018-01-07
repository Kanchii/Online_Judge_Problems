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

    string a, b;
    cin >> a >> b;
    string res = "";
    for(int i = 0; i < a.size(); i++){
        res += 'a';
    }
    int i;
    for(i = 0; i < a.size(); i++){
        int diff = (int)(b[i] - a[i]);
        if(diff > 1){
            res[i] = (char)(a[i] + 1);
        } else {
            if(i + 1 <= (a.size() - 1) and a[i + 1] < 'z'){
                res[i] = (char)min(a[i], b[i]);
            } else {
                res[i] = (char)max(a[i], b[i]);
            }
        }
        if(res > a and res < b){
            cout << res << endl;
            break;
        }
    }

    if(i == a.size()){
        int l = a.size() - 1;
        int f = 0;
        while(res[l] < 'z'){
            res[l]++;
            if(res > a and res < b){
                cout << res << endl;
                f = 1;
                break;
            }
        }
        if(!f){
            cout << "No such string" << endl;
        }
    }

    return 0;
}
