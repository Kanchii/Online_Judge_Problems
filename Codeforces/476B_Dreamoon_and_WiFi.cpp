#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAXN 100005
#define MOD 1000000007
#define pb push_back
#define pu push
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

string s;
int lastPos;

int solve(int pos, int soma){
    if(pos == s.size()){
        return (soma == lastPos);
    }
    if(s[pos] == '-'){
        return solve(pos + 1, soma - 1);
    } else if(s[pos] == '+'){
        return solve(pos + 1, soma + 1);
    } else {
        return solve(pos + 1, soma - 1) + solve(pos + 1, soma + 1);
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin >> s;
    for(char c : s){
        if(c == '-'){
            lastPos--;
        } else {
            lastPos++;
        }
    }
    int tot = 1;
    int pos = 0;
    cin >> s;
    for(char c : s){
        if(c == '?'){
            tot *= 2;
        } else if(c == '-'){
            pos--;
        } else {
            pos++;
        }
    }
    if(tot == 1){
        if(pos == lastPos){
            printf("%.10f\n", 1.0);
        } else {
            printf("%.10f\n", 0.0);
        }
    } else {
        printf("%.10f\n", (double)solve(0, 0) / (double)tot);
    }

    return 0;
}
