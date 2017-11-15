#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    ll res = 0;

    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        ll pot = x[x.size() - 1] - '0';
        ll corpo = 0;
        for(int j = 0; j < x.size() - 1; j++){
            corpo = (ll)(corpo * 10LL + (ll)(x[j] - '0'));
        }
        pot--;
        if(pot == -1){
            corpo = 1;
        } else {
            ll aux = corpo;
            for(int j = 0; j < pot; j++){
                corpo *= aux;
            }   
        }
        
        res += corpo;
    }
    cout << res << endl;

    return 0;
}