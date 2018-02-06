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
#define prtl(x) cout << x << endl;
#define prt(x) cout << x

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int comp(char *a, char *b, int sa, int sb){

    if(sa == -1 and sb == -1){
        return 0;
    } else if(sa == -1){
        return -1;
    } else if(sb == -1){
        return 1;
    }

    int ta = strlen(a);
    int tb = strlen(b);
    int tamA = ta - sa;
    int tamB = tb - sb;

    //cout << tamA << " " << tamB << endl;

    if(tamA > tamB){
        return 1;
    } else if(tamA < tamB){
        return -1;
    } else {
        for(int i = sa, j = sb; i < ta and j < tb; i++, j++){
            int va = a[i] - '0';
            int vb = b[j] - '0';
            //cout << "VA: " << va << " VB: " << vb << endl;
            if(va > vb){
                return 1;
            } else if(va < vb){
                return -1;
            }
        }
    }
    return 0;
}

int main(int argc, char const *argv[]){

    char first[1000100], sec[1000100];
    scanf("%s", first);
    scanf("%s", sec);

    int pa = -1, pb = -1;
    for(int i = 0; i < strlen(first); i++){
        if(first[i] != '0'){
            pa = i;
            break;
        }
    }
    for(int i = 0; i < strlen(sec); i++){
        if(sec[i] != '0'){
            pb = i;
            break;
        }
    }
    int res = comp(first, sec, pa, pb);
    if(res == 1){
        cout << ">" << endl;
    } else if(res == -1){
        cout << "<" << endl;
    } else {
        cout << "=" << endl;
    }

    return 0;
}