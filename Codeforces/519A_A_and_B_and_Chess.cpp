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
    
    int QUEEN = 9;
    int ROOK = 5;
    int BISHOP  = 3;
    int KNIGHT = 3;
    int PAWN = 1;

    int c1 = 0, c2 = 0;
    fori(8){
        forj(8){
            char c;
            cin >> c;
            if(c == 'Q'){
                c1 += QUEEN;
            } else if(c == 'q'){
                c2 += QUEEN;
            } else if(c == 'R'){
                c1 += ROOK;
            } else if(c == 'r'){
                c2 += ROOK;
            } else if(c == 'B'){
                c1 += BISHOP;
            } else if(c == 'b'){
                c2 += BISHOP;
            } else if(c == 'N'){
                c1 += KNIGHT;
            } else if(c == 'n'){
                c2 += KNIGHT;
            } else if(c == 'P'){
                c1 += PAWN;
            } else if(c == 'p'){
                c2 += PAWN;
            }
        }
    }

    if(c1 > c2){
        prtl("White");
    } else if(c1 < c2){
        prtl("Black");
    } else {
        prtl("Draw");
    }

    return 0;
}