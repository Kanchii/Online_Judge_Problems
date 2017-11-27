#include <bits/stdc++.h>

#define INF (1 << 30)
#define LINF (1LL << 63)

using namespace std;
 
map<int, int> mapa;

int main() {

	
	int n;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		mapa[x]++;
	}
	map<int,int>::iterator it = mapa.begin();

	for(; it != mapa.end(); it++){
		cout << it -> first << " aparece " << it -> second << " vez(es)" << endl;
	}

    return 0;
}