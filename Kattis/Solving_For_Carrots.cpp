#include <iostream>

using namespace std;

typedef long long ll;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    string x;
    cin.ignore();
    while(n--){
        getline(cin, x);
    }
    cout << m << endl;


    return 0;
}