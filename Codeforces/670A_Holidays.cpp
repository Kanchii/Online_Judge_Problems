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
    if(n % 7 == 0){
        cout << (n / 7) * 2 << " " << (n / 7) * 2 << endl;
    } else {
        int maxi = 0, mini = 0;
        for(int i = 0; i < n; i++){
            if(i % 7 == 0 or i % 7 == 1){
                maxi++;
            }
        }
        for(int i = 0; i < n; i++){
            if(i % 7 == 5 or i % 7 == 6){
                mini++;
            }
        }
        cout << mini << " " << maxi << endl;
    }

    return 0;
}
