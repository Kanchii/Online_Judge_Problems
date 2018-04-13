#include <bits/stdc++.h>

using namespace std;

#define INF (1 << 30)
#define LINF (1LL << 63)
#define SWAP(a,b) ((a) ^= (b) ^= (a) ^= (b))
#define MAX 1000010

typedef long long ll;

int main() {

	string dec[16] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15"};
	string oct[16] = {"0", "1", "2", "3", "4", "5", "6", "7", "10", "11", "12", "13", "14", "15", "16", "17"};
	string hex[16] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"};
	for(int i = 0; i < 39; i++){
		cout << "-";
	} cout << endl;
	for(int i = 0; i < 39; i++){
		if(!i or i == 12 or i == 22 or i == 38){
			cout << "|";
		} else if(i == 3){
			cout << "decimal";
			i += 6;
		} else if(i == 15){
			cout << "octal";
			i += 4;
		} else if(i == 25){
			cout << "Hexadecimal";
			i += 10;
		} else {
			cout << " ";
		}
	} cout << endl;
	for(int i = 0; i < 39; i++){
		cout << "-";
	} cout << endl;
	for(int i = 0; i < 16; i++){
		for(int j = 0; j < 39; j++){
			if(!j or j == 12 or j == 22 or j == 38){
				cout << "|";
			} else if(j == 7){
				cout << dec[i];
				j += dec[i].size() - 1;
			} else if(j == 17){
				cout << oct[i];
				j += oct[i].size() - 1;
			} else if(j == 30){
				cout << hex[i];
				j += hex[i].size() - 1;
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
