#include <iostream>

using namespace std;

typedef long long ll;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int x, y;
    cin >> x >> y;

    if(x > 0 and y > 0){
        cout << 1 << endl;
    } else if(x > 0 and y < 0){
        cout << 4 << endl;
    } else if(x < 0 and y > 0){
        cout << 2 << endl;
    } else {
        cout << 3 << endl;
    }


    return 0;
}

