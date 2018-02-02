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
#define prtl(x) cout << x << endl;
#define prt(x) cout << x

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

vector<string> vet;

int is_equal(string a, string b){

    for(int i = 0; i < a.size(); i++){
        if(a == b){
            return 1;
        }
        b += b[0];
        b.erase(b.begin());
        if(a == b){
            return 1;
        }
    }
    return 0;

}

int solve(string alvo, string daVez){
    int cnt = 0;

    //cout << "daVez: " << daVez << " Alvo: " << alvo << endl;

    while(alvo != daVez){
        cnt++;
        daVez += daVez[0];
        daVez.erase(daVez.begin());
        //cout << "daVez atual: " << daVez << " Alvo: " << alvo << endl;
    }

    return cnt;

}

int main(int argc, char const *argv[]){

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        vet.pb(s);
    }
    int ok = 1;
    for(int i = 1; i < n; i++){
        if(!is_equal(vet[i], vet[i - 1])){
            ok = 0;
        }
    }

    if(ok){

        int res = INF;
        for(int i = 0; i < vet.size(); i++){
            string alvo = vet[i];
            int cnt = 0;
            for(int j = 0; j < vet.size(); j++){
                if(i == j) continue;

                cnt += solve(alvo, vet[j]);
            }
            res = min(res, cnt);
        }
        cout << res << endl;

    } else {
        cout << "-1" << endl;
    }

    return 0;
}