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
#define DEBUG(x) cout << #x << " = " << x << endl

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

map<int, int> A, B, C;

int main(int argc, char const *argv[]){

    int n;
    cin >> n;
    fori(n){
        int x;
        cin >> x;
        A[x]++;
    }
    fori(n - 1){
        int x;
        cin >> x;
        B[x]++;
    }
    fori(n - 2){
        int x;
        cin >> x;
        C[x]++;
    }

    map<int, int>::iterator it = A.begin();
    for(; it != A.end(); it++){
        if(B.find(it -> first) == B.end()){
            cout << it -> first << endl;
            break;
        } else if(B[it -> first] < it -> second){
            cout << it -> first << endl;
            break;
        }
    }
    map<int, int>::iterator iter = B.begin();
    for(; iter != B.end(); iter++){
        if(C.find(iter -> first) == C.end()){
            cout << iter -> first << endl;
            break;
        } else if(C[iter -> first] < iter -> second){
            cout << iter -> first << endl;
            break;
        }
    }

    return 0;
}