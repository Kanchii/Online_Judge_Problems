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
#define prtl(x) cout << x << endl
#define prt(x) cout << x
#define sz() size()

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){

    string a, b;
    cin >> a >> b;

    int vetMin[30], vetMai[30];
    memset(vetMai, 0, sizeof(vetMai));
    memset(vetMin, 0, sizeof(vetMin));
    for(int i = 0; i < b.sz(); i++){
        if(isupper(b[i])){
            vetMai[b[i] - 'A']++;
        } else {
            vetMin[b[i] - 'a']++;
        }
    }

    int aa = 0, bb = 0;

    int vis[a.sz()];
    memset(vis, 0, sizeof(vis));

    for(int i = 0; i < a.sz(); i++){
        char daVez = a[i];
        if(isupper(daVez)){
            int pos = daVez - 'A';
            if(vetMai[pos] > 0){
                aa++;
                vetMai[pos]--;
                vis[i] = 1;
            }
        } else {
            int pos = daVez - 'a';
            if(vetMin[pos] > 0){
                aa++;
                vetMin[pos]--;
                vis[i] = 1;
            }
        }
    }

    for(int i = 0; i < a.sz(); i++){
        if(!vis[i]){
            char daVez = a[i];
            if(isupper(daVez)){
                int pos = daVez - 'A';
                if(vetMin[pos] > 0){
                    bb++;
                    vetMin[pos]--;
                }
            } else {
                int pos = daVez - 'a';
                if(vetMai[pos] > 0){
                    bb++;
                    vetMai[pos]--;
                }
            }
        }
    }

    cout << aa << " " << bb << endl;

    return 0;
}