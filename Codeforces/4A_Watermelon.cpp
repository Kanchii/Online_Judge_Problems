#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;

int main(){
    int x;
    cin >> x;
    printf("%s\n", ((x % 2 == 0 and x > 2) ? "YES" : "NO"));
    
    return 0;
}
