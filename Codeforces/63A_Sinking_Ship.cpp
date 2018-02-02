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

struct People {
    string name;
    int pos, rank;

    People(string name, int pos, int rank){
        this -> name = name;
        this -> pos = pos;
        this -> rank = rank;
    }
};

int getRank(string rank){
    if(rank == "rat"){
        return 4;
    } else if(rank == "woman" or rank == "child"){
        return 3;
    } else if(rank == "man"){
        return 2;
    }
    return 1;
}

int ord(const People &a, const People &b) {
    if(a.rank == b.rank){
        return a.pos < b.pos;
    }
    return a.rank > b.rank;
}

int main(int argc, char const *argv[]){ 

    vector<People> vet;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string a, b;
        cin >> a >> b;
        vet.pb(People(a, i, getRank(b)));
    }
    sort(vet.begin(), vet.end(), ord);
    for(int i = 0; i < vet.size(); i++){
        cout << vet[i].name << endl;
    }

    return 0;
}
