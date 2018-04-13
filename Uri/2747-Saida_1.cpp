#include <bits/stdc++.h>

using namespace std;

#define INF (1 << 30)
#define LINF (1LL << 63)
#define SWAP(a,b) ((a) ^= (b) ^= (a) ^= (b))
#define MAX 1000010

typedef long long ll;

int main() {

	for(int i = 0; i < 39; i++){
		cout << "-";
	} cout << endl;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 39; j++){
			if(!j or j == 38){
				cout << "|";
			} else {
				cout << " ";
			}
		} cout << endl;
	}
	for(int i = 0; i < 39; i++){
		cout << "-";
	} cout << endl;


    return 0;
}
