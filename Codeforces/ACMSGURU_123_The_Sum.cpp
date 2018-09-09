#include <bits/stdc++.h>
using namespace std;

#define INF 1e18

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll fat[50];
    ll sum[50];
    fat[1] = 1;
    fat[2] = 1;
    sum[1] = 1;
    sum[2] = 2;
    for(int i = 3; i <= 49; i++){
        fat[i] = fat[i - 1] + fat[i - 2];
        sum[i] = sum[i - 1] + fat[i];
    }
    int s;
    cin >> s;
    cout << sum[s] << endl;
    return 0;
}
