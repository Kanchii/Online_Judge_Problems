#include <iostream>

using namespace std;

typedef long long ll;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int cont = 0;
    int x;
    while(n--){
        cin >> x;
        if(x < 0){
            cont++;
        }
    }
    cout << cont << endl;

    return 0;
}