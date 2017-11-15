#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    ll x;
    cin >> x;

    if(x % 2 == 0){
        cout << "Bob" << endl;
    } else {
        cout << "Alice" << endl;
    }

    return 0;
}