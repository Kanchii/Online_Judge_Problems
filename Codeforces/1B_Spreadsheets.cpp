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

int RC(string s){

    if(s[0] != 'R'){
        return 0;
    }

    int j = 1;
    int f = 0;
    while(isdigit(s[j])){
        j++;
        f = 1;
    }
    if(s.size() == j or s[j] != 'C' or !f){
        return 0;
    }
    return 1;
}

string convert_to_normal(ll col){
    string res = "";
    while(col > 0){
        if(col % 26 == 0){
            col--;
            res += 'Z';
        } else {
            res += (char)(col % 26 - 1 + 'A');
        }
        col /= 26;
    }

    reverse(res.begin(), res.end());

    return res;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(RC(s)){
            ll row = 0;
            int j = 1;
            while(j < s.size() and isdigit(s[j])){
                row *= 10;
                row += (s[j++] - '0');
            }
            ll col = 0;
            j++;
            for(; j < s.size(); j++){
                col *= 10;
                col += (s[j] - '0');
            }
            cout << convert_to_normal(col) << row << endl;
        } else {
            ll col = 0;
            string row = "";
            int j = 0;
            while(j < s.size() and !isdigit(s[j])){
                col *= 26;
                col += (s[j++] - 'A' + 1);
            }
            for(; j < s.size(); j++){
                row += s[j];
            }
            cout << "R" << row << "C" << col << endl;
        }
    }

    return 0;
}
