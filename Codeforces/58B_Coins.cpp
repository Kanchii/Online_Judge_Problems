#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    vector<int> v;
    cin >> n;
    if(n == 1){
        cout << 1 << endl;
        exit(0);
    } else {
        cout << n;
    }
    v.push_back(n);
    for(int i = n - 1; i >= 2; i--){
        int f = 1;
        for(int u : v){
            if(u % i != 0){
                f = 0;
                break;
            }
        }
        if(f){
            v.push_back(i);
            cout << " " << i;
        }
    } cout << " " << 1 << endl;
    return 0;
}
