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

int four(int *vet){
    int a = (vet[0] == vet[1] and vet[1] == vet[2] and vet[2] == vet[3]);
    int b = (vet[1] == vet[2] and vet[2] == vet[3] and vet[3] == vet[4]);
    int c = (vet[2] == vet[3] and vet[3] == vet[4] and vet[4] == vet[5]);
    if(a or b or c){
        if(a){
            return 0;
        }
        if(b){
            return 1;
        }
        return 2;
    }
    return -1;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int vet[6];
    for(int i = 0; i < 6; i++){
        cin >> vet[i];
    }
    sort(vet, vet + 6);
    int aux = four(vet);
    if(aux != -1){
        if(aux == 0){
            if(vet[4] != vet[5]){
                cout << "Bear" << endl;
            } else {
                cout << "Elephant" << endl;
            }
        } else if(aux == 1){
            if(vet[0] != vet[5]){
                cout << "Bear" << endl;
            } else {
                cout << "Elephant" << endl;
            }
        } else {
            if(vet[0] != vet[1]){
                cout << "Bear" << endl;
            } else {
                cout << "Elephant" << endl;
            }
        }
    } else {
        cout << "Alien" << endl;
    }

    return 0;
}
