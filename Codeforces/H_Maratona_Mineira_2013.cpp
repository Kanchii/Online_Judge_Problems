#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

vi deg;

int main(){
    int n;
    while(scanf("%d",&n),n != 0){
        deg.assign(n+5, 1);
        for(int i = 0; i < n; i++){
            int x; scanf("%d",&x);
            deg[x]++;
        }
        for(int i = 1; i <= n+2; i++)
            printf("%d ", deg[i]);
        cout << endl;
    }
    return 0;
}
