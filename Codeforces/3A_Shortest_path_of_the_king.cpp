#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define DINF (1.0 / 0.0)
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 100000
#define mp make_pair
#define pb push_back
#define PI (2 * acos(0.0))
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define DEBUG(x) cout << #x << " = " << x << endl
#define fst first
#define snd second
#define endl '\n'

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;
typedef unsigned long long llu;

tuple<int, int> toCoord(string s){
    int a, b;
    a = (s[0] - 'a');
    b = (s[1] - '0' - 1);
    return tuple<int,int>(a, b);
}

inline string getMove(int &a, int &b, int c, int d){

    if(a < c and b > d){
        a++; b--;
        return "RD";
    } else if(a < c and b < d){
        a++; b++;
        return "RU";
    } else if(a > c and b < d){
        a--; b++;
        return "LU";
    } else if(a > c and b > d){
        a--; b--;
        return "LD";
    } else if(a > c){
        a--;
        return "L";
    } else if(a < c){
        a++;
        return "R";
    } else if(b > d){
        b--;
        return "D";
    } else {
        b++;
        return "U";
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    string s1, s2;
    cin >> s1 >> s2;

    int a, b, c, d;

    tie(a, b) = toCoord(s1);
    tie(c, d) = toCoord(s2);

    vector<string> moves;
    while((a != c or b != d)){
        moves.emplace_back(getMove(a, b, c, d));
    }

    cout << moves.size() << endl;
    for(string s : moves){
        cout << s << endl;
    }

    return 0;
}
