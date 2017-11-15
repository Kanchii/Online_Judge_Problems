#include <iostream>

using namespace std;

typedef long long ll;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int x, y;
    cin >> x >> y;

    cout << (x * (y - 1) + 1) << endl;


    return 0;
}