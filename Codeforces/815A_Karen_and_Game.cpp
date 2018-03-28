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

int matriz[101][101];
int matrizAux[101][101];
int n, m;

int miniCol(int col){
    int res = 1000;
    for(int i = 0; i < n; i++){
        res = min(res, matrizAux[i][col]);
    }
    return res;
}

int miniRow(int row){
    int res = 1000;
    for(int i = 0; i < m; i++){
        res = min(res, matrizAux[row][i]);
    }
    return res;
}


void copyMatriz(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            matrizAux[i][j] = matriz[i][j];
        }
    }
}

void atualizaMatrizC(int v, int c){
    for(int i = 0; i < n; i++){
        matrizAux[i][c] -= v;
    }
}

void atualizaMatrizR(int v, int r){
    for(int i = 0; i < m; i++){
        matrizAux[r][i] -= v;
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matriz[i][j];
        }
    }

    int pa = 1, pb = 1;

    copyMatriz();

    /*col -> row*/
    vector<string> resA;
    for(int i = 0; i < m; i++){
        int mini = miniCol(i);
        for(int j = 0; j < mini; j++){
            resA.push_back("col " + to_string(i + 1));
        }
        if(mini > 0){
            atualizaMatrizC(mini, i);
        }
    }
    for(int i = 0; i < n; i++){
        int mini = miniRow(i);
        for(int j = 0; j < mini; j++){
            resA.push_back("row " + to_string(i + 1));
        }
        if(mini > 0){
            atualizaMatrizR(mini, i);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrizAux[i][j] > 0){
                pa = 0;
            }
        }
    }
    /*row -> col*/
    copyMatriz();

    vector<string> resB;

    for(int i = 0; i < n; i++){
        int mini = miniRow(i);
        for(int j = 0; j < mini; j++){
            resB.push_back("row " + to_string(i + 1));
        }
        if(mini > 0){
            atualizaMatrizR(mini, i);
        }
    }

    for(int i = 0; i < m; i++){
        int mini = miniCol(i);
        for(int j = 0; j < mini; j++){
            resB.push_back("col " + to_string(i + 1));
        }
        if(mini > 0){
            atualizaMatrizC(mini, i);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrizAux[i][j] > 0){
                pb = 0;
            }
        }
    }
    if(!pa and !pb){
        cout << -1 << endl;
        return 0;
    } else {
        cout << min(resA.size(), resB.size()) << endl;
    }

    if(resA.size() < resB.size()){
        for(string s : resA){
            cout << s << endl;
        }
    } else {
        for(string s : resB){
            cout << s << endl;
        }
    }
    return 0;
}
