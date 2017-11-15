#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    int maxi;
    cin >> maxi;
    int n;
    cin >> n;
    int tot = maxi;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        tot += (maxi - x);
    }
    cout << tot << endl;

    return 0;
}