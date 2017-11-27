#include <bits/stdc++.h>

using namespace std;

#define INF (1 << 30)
#define LINF (1LL << 62)

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef long long ll;

int main(){

    int n;
    cin >> n;
    while(n--){
        string a, b;
        cin >> a >> b;
        if(b.size() > a.size()){
            cout << "nao encaixa" << endl;
        } else {
            int i = a.size() - b.size();
            for(int y = 0; i < a.size(); i++, y++){
                if(a[i] != b[y]){
                    break;
                }            
            }
            if(i != a.size()){
                cout << "nao encaixa" << endl;
            } else {
                cout << "encaixa" << endl;
            }
        }
    }


    return 0;
}


