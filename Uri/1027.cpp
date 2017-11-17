#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <utility>
#include <string>
#include <map>
#include <algorithm>

#define INF 100000000

using namespace std;

bool ordena(const pair<int, int> &a, const pair<int, int> &b){
	return a.first < b.first;
}


int main(){
    ios_base::sync_with_stdio(false);
	int n;
	while(cin >> n){
		vector<pair<int, int> > vet;
		int x, y;
		for(int i = 0; i < n; i++){
			cin >> x >> y;
			vet.push_back(make_pair(x, y));
		}
		sort(vet.begin(), vet.end(), ordena);
		vector<int> testes;
		map<int, bool> mapa;
		for(size_t i = 0; i < vet.size(); i++){
			for(size_t j = i + 1; j < vet.size(); j++){
				if(vet[i].first != vet[j].first){
					if(abs(vet[i].second - vet[j].second) == 2){
						if(!mapa[(vet[i].second + vet[j].second)/2]){
							testes.push_back((vet[i].second + vet[j].second)/2);
							mapa[(vet[i].second + vet[j].second)/2] = true;
						}
					}
				}
			}
		}
		int maxi = 1;
		for(size_t i = 0; i < testes.size(); i++){
			vector<pair<int, int> > aux;
			for(size_t j = 0; j < vet.size(); j++){
				if(abs(vet[j].second - testes[i]) == 1){
					aux.push_back(vet[j]);
				}
			}
			for(size_t k = 0; k < aux.size(); k++){
				int xAnt = aux[k].first;
				int daVez = testes[i];
				int cont = 1;				
				bool up = false, down = false;
				if(aux[k].second > daVez){
					up = true;
				} else {
					down = true;
				}
				for(size_t j = k + 1; j < aux.size(); j++){
					if(aux[j].first != xAnt){
						if(up){
							if(aux[j].second < daVez){
								up = false;
								down = true;
								cont++;
								xAnt = aux[j].first;
							}
						} else {
							if(aux[j].second > daVez){
								up = true;
								down = false;
								cont++;
								xAnt = aux[j].first;
							}
						}					
					}
				}
				maxi = max(maxi, cont);
			}
		}
		cout << maxi << endl;
	}

    return 0;
}
