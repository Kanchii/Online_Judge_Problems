#include <bits/stdc++.h>

#define INF (1 << 30)
#define LINF (1LL << 63)

using namespace std;
 
map<int, int> mapa;

int main() {

	int n;
	while(cin >> n and n){

		vector<int> vet;
		for(int i = 1; i <= n; i++){
			vet.push_back(i);
		}
		vector<int> discard;
		while(vet.size() > 1){
			discard.push_back(vet[0]);
			vet.erase(vet.begin());
			vet.push_back(vet[0]);
			vet.erase(vet.begin());
		}
		cout << "Discarded cards: ";
		for(int i = 0; i < discard.size(); i++){
			if(i){
				cout << ", ";
			}
			cout << discard[i];
		}
		cout << endl;
		cout << "Remaining card: " << vet[0] << endl;

	}

    return 0;
}