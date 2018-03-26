#include <bits/stdc++.h>
using namespace std;

int main(){

    regex r("(a|b)");
    string obj = "a";
    if(regex_match(obj, r)){
        cout << "Match" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
