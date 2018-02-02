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

int solveA(string a, string b){
    if(a.size() <= b.size()){
        return 0;
    }
    int vet[30];
    memset(vet, 0, sizeof(vet));
    for(int i = 0; i < a.size(); i++){
        int pos = (int)(a[i] - 'a');
        vet[pos]++;
    }
    int vvet[30];
    memset(vvet, 0, sizeof(vvet));
    for(int i = 0; i < b.size(); i++){
        int pos = (int)(b[i] - 'a');
        vvet[pos]++;
    }
    for(int i = 0; i < 30; i++){
        if(vvet[i] > vet[i]){
            return 0;
        }
    }
    return 1;
}

int solveB(string a, string b){
    int vet[30];
    memset(vet, 0, sizeof(vet));
    for(int i = 0; i < a.size(); i++){
        int pos = (int)(a[i] - 'a');
        vet[pos]++;
    }
    int vvet[30];
    memset(vvet, 0, sizeof(vvet));
    for(int i = 0; i < b.size(); i++){
        int pos = (int)(b[i] - 'a');
        vvet[pos]++;
    }
    for(int i = 0; i < 30; i++){
        if(vvet[i] > vet[i]){
            return 0;
        }
    }
    
    int p = 0;
    for(int i = 0; i < a.size() and p < b.size(); i++){
        if(a[i] == b[p]){
            p++;
        }
    }
    return !(p == b.size());

}

int main(int argc, char const *argv[]){

    string a, b;
    cin >> a >> b;

    int automaton = solveA(a, b);
    int array = solveB(a, b);

    if(automaton and array){
        cout << "both" << endl;
    } else if(automaton){
        cout << "automaton" << endl;
    } else if(array){
        cout << "array" << endl;
    } else {
        cout << "need tree" << endl;
    }


    return 0;
}
