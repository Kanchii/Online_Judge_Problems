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

int verify(int u, int v, int *vet){

    for(int i = u + 1; i <= v; i++){
        if(vet[i] > vet[i - 1]){
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    ii vet[n + 1];
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        vet[i] = ii(x, i);
    }
    sort(vet, vet + n);
    int flag = 0;
    int ruim = 0;
    int start, end;
    for(int i = 0; i < n; i++){
        if(vet[i].second != i){
            if(flag){
                ruim = 1;
                break;
            }
            flag = 1;
            start = i;
            i++;
            while(i < n and vet[i].second + 1 == vet[i - 1].second){
                i++;
            }
            end = i - 1;
        }
    }

    if(ruim){
        cout << "no" << endl;
    } else {
        if(!flag){
            cout << "yes\n1 1\n";
        } else {
            cout << "yes" << endl << start + 1 << " " << end + 1 << endl;
        }
    }

    return 0;
}
