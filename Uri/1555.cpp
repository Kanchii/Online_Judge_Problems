#include <bits/stdc++.h>

using namespace std;

#define INF (1 << 30)
#define LINF (1LL << 63)
#define SWAP(a,b) ((a) ^= (b) ^= (a) ^= (b))

typedef long long ll;

template <typename T>
int isPrime(T x){
	T k = floor(sqrt(x));
	for(T i = 2; i <= k; i++){
		if(x % i == 0){
			return 0;
		}
	}
	return 1;
}

int f1(int x, int y){
	return (3*x)*(3*x) + y*y;
}

int f2(int x, int y){
	return 2*(x*x) + (5*y)*(5*y);
}

int f3(int x, int y){
	return -100*x + y*y*y;
}

int main() {

	int n;
	cin >> n;
	while(n--){
		int x, y;
		cin >> x >> y;
		int a = f1(x, y);
		int b = f2(x, y);
		int c = f3(x, y);
		if(a > b and a > c){
			cout << "Rafael ganhou" << endl;
		} else if(b > a and b > c){
			cout << "Beto ganhou" << endl;
		} else {
			cout << "Carlos ganhou" << endl;
		}
	}

    return 0;
}