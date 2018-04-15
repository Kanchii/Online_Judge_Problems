#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAXN 100000000
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
typedef unsigned long long ull;


int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<string> vet;
    vvi aux(30);
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        aux[s[0] - 'a'].pb(i);
        vet.pb(s);
    }
    vector<string> vett;
    vvi points(30);
    for(int i = 0; i < m; i++){
        string s;
        cin >> s;
        if(i == 0){
            for(int j = 0; j <= s.size() - m; j++){
                if(!aux[s[j] - 'a'].empty()){
                    points[s[j] - 'a'].pb(j);
                }
            }
        }
        vett.pb(s);
    }
    int x, y;
    int ff = 0;
    for(int i = 0; i <= n-m and !ff; i++){
        ll hash = (ll)(((ll)vet[i][0] + (ll)vet[i + m - 1][m - 1]) - ((ll)vet[i][m - 1] + (ll)vet[i + m - 1][0])) >> 5;
        hash += (ll)(((ll)vet[i + m/2][0] * (ll)vet[i + m/2][m - 1]) - ((ll)vet[i][m/2] * (ll)vet[i + m -1][m/2])) << 3;
        ll sumA = 0, sumB = 0;
        for(int j = 0; j < m; j++){
            sumA += ((ll)vet[i + j][j]) << 2;
            sumB += ((ll)vet[i + j][m - j - 1]) >> 3;
        }
        for(int j = 0; j < m; j++){
            sumA -= (ll)(vet[i + m/2][j]) << 3;
            sumB += (ll)(vet[i + j][m/2]) >> 4;
        }
        hash += (sumA * sumB);
        for(int j : points[vet[i][0] - 'a']){
            ll hashh = (ll)(((ll)vett[0][j] + (ll)vett[m - 1][j + m - 1]) - ((ll)vett[0][j + m - 1] + (ll)vett[m - 1][j])) >> 5;
            hashh += (ll)(((ll)vett[m/2][j] * (ll)vett[m/2][j+m-1]) - ((ll)vett[0][j + m/2] * (ll)vett[m-1][j + m/2])) << 3;
            ll sumAA = 0;
            ll sumBB = 0;
            for(int k = 0; k < m; k++){
                sumAA += ((ll)vett[k][j + k]) << 2;
                sumBB += ((ll)vett[k][(j + m - 1) - k]) >> 3;
            }
            for(int k = 0; k < m; k++){
                sumAA -= (ll)(vett[m/2][j + k]) << 3;
                sumBB += (ll)(vett[k][j + m/2]) >> 4;
            }
            hashh += (sumAA * sumBB);
            if(hash == hashh){
                /*int f = 1;
                for(int k = 0; k < m and f; k++){
                    for(int l = 0; l < m and f; l++){
                        if(vet[i + k][l] != vett[k][j + l]){
                            f = 0;
                        }
                    }
                }*/
                //if(f){
                    x = i + 1;
                    y = j + 1;
                    ff = 1;
                    break;
                //}
            }
        }
        /*
        for(int j = 0; j <= n - m and !ff; j++){

        }*/
    }
    cout << x << " " << y << endl;
    return 0;
}
