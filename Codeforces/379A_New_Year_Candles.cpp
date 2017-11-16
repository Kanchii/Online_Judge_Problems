#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100
#define mp make_pair

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){
	
	int a, b;
    cin >> a >> b;

    int r = 0;

    int l = floor(a / (double)b);
    while(l > 0){
        r += a;
        a = l;
        l = floor(a / (double)b);
    }
    r += a;
    cout << r << endl;
    return 0;

}