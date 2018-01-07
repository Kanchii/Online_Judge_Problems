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

int vet[50];

void pre(string pat){

    int i = 1, j = 0;
    memset(vet, 0, sizeof(vet));

    for(int i = 1; i < pat.size(); i++){
        if(pat[i] == pat[j]){
            vet[i] = j + 1;
            j++;
        } else {
            while(pat[i] != pat[j] and j > 0){
                j = vet[j - 1];
            }
            if(pat[i] == pat[j]){
                vet[i] = j + 1;
                j++;
            }
        }
    }
}

int KMP(string a, string pat){

    pre(pat);

    int res = 0;
    int j = 0;
    for(int i = 0; i < a.size(); i++){
        if(pat[j] == a[i]){
            j++;
            if(j == pat.size()){
                a[i] = '#';
                res++;
                j = 0;
            }
        } else {
            while(j > 0 and pat[j] != a[i]){
                j = vet[j - 1];
            }
            if(pat[j] == a[i]){
                j++;
            }
        }
    }

    /*for(int i = 0; i < a.size(); i++){
        cout << a[i];
    } cout << endl;*/

    return res;

}

int main(int argc, char const *argv[]){

    string a, b;
    cin >> a >> b;

    cout << KMP(a, b) << endl;

    return 0;
}
