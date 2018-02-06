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

int isPossible(string a, string b){
    int p = 0;
    for(int i = 0; i < a.size() and p < b.size(); i++){
        if(a[i] == b[p]){
            p++;
        }
    }
    return (p == b.size());
}

int main(int argc, char const *argv[]){
    
    string s, pat;
    cin >> s >> pat;

    int vet[s.size()];
    for(int i = 0;  i < (int)s.size(); i++){
        cin >> vet[i];
    }


    if(pat == s){
        cout << 0 << endl;
    } else {
        int l = 1, r = (int)s.size();
        int mid;
        string res;
        while(l <= r){
            mid = (l + r) / 2;
            //cout << "MID = " << mid << endl;
            res = "";
            int vv[s.size()];
            for(int i = 0; i < mid; i++){
                vv[i] = vet[i];
            }
            sort(vv, vv + mid);
            /*cout << "VET: ";
            for(int i = 0; i < mid; i++){
                cout << vv[i] << " ";
            } cout << endl;*/
            int p = 0;
            for(int i = 0; i < mid; i++){
                while(p < vv[i] - 1){
                    res += s[p++];
                }
                p++;
            }
            while(p < s.size()){
                res += s[p++];
            }
            /*if(res == pat){
                break;
            }*/
            //cout << "RES: " << res << endl << endl;
            if(isPossible(res, pat)){
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if(isPossible(res, pat)){
            cout << mid << endl;    
        } else {
            cout << (mid - 1) << endl;
        }
        
    }

    return 0;
}