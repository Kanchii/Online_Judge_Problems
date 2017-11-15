#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int main(int argc, char const *argv[]){

	int n;
	cin >> n;
	vector<int> vet;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		vet.push_back(x);
	}
	sort(vet.rbegin(), vet.rend());
	int r = 0;
	for(int i = 0; i < vet.size(); i++){
		if(vet[i] == 4){
			r++;
		} else {
			int c = vet[i];
			while(i < vet.size()){
				int l = vet.size() - 1;
				if(c + vet[l] <= 4){
					c += vet[l];
					vet.pop_back();
				} else {
					break;
				}
			}
			r++;
		}
	}
	cout << r << endl;

	return 0;
}