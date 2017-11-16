#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100
#define mp make_pair

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){
	int n;
    cin >> n;
    string s;
    cin >> s;
    int vet[30];
    memset(vet, 0, sizeof(vet));
    for(char c : s){
        c = tolower(c);
        vet[c - 'a']++;
    }
    int f = 1;
    for(char i = 0; i <= 'z' - 'a'; i++){
        if(!vet[i]){
            f = 0;
        }
    }
    if(f){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}