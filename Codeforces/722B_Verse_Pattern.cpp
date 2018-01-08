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

int isVogal(char c){
    return (c == 'a' or c == 'i' or c == 'e' or c == 'o' or c == 'u' or c == 'y');
}

int countV(string &s){
    int r = 0;
    for(int i = 0; i < s.size(); i++){
        if(isVogal(s[i])){
            r++;
        }
    }
    return r;
}

int main(int argc, char const *argv[]){

    int n;
    cin >> n;
    cin.ignore();
    int vet[n + 1];
    for(int i = 0; i < n; i++){
        cin >> vet[i];
        cin.ignore();
    }
    int ok = 1;
    for(int i = 0; i < n; i++){
        string s;
        getline(cin, s);
        int c = countV(s);
        if(c != vet[i]){
            ok = 0;
        }
    }
    
    if(ok){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
