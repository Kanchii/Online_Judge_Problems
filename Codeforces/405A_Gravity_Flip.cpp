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
    vector<int> vet(n);
    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }
    sort(vet.begin(), vet.end());
    for(int i = 0; i < vet.size(); i++){
        if(i){
            cout << " ";
        }
        cout << vet[i];
    } cout << endl;


    return 0;
}