#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
#define MAX 50005
#define all(x) (x.begin(), x.end())
#define mp(x, y) (make_pair(x, y))
#define endl '\n'
#define max(a, b) ((a) > (b) ? (a) : (b))

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;

void multiply(int F[2][2], int M[2][2], int m);
 
void power(int F[2][2], ull n, int m);
 
/* function that returns nth Fibonacci number */
int fib(ull n, int m)
{
  int F[2][2] = {{1,1},{1,0}};
  power(F, n, m);
  return (2*F[0][0] - 1)%m;
}
 
/* Optimized version of power() in method 4 */
void power(int F[2][2], ull n, int m)
{
  if( n == 0 || n == 1)
      return;
  int M[2][2] = {{1,1},{1,0}};
 
  power(F, n/2, m);
  multiply(F, F, m);
 
  if (n%2 != 0)
     multiply(F, M, m);
}
 
void multiply(int F[2][2], int M[2][2], int m)
{
  int x =  ((F[0][0]%m*M[0][0]%m)%m + (F[0][1]%m*M[1][0]%m)%m)%m;
  int y =  ((F[0][0]%m*M[0][1]%m)%m + (F[0][1]%m*M[1][1]%m)%m)%m;
  int z =  ((F[1][0]%m*M[0][0]%m)%m + (F[1][1]%m*M[1][0]%m)%m)%m;
  int w =  ((F[1][0]%m*M[0][1]%m)%m + (F[1][1]%m*M[1][1]%m)%m)%m;
 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}

int main() {
	ios_base::sync_with_stdio(false);
	ull n;
	int b;
	int caso = 1;
	while(cin >> n >> b and (n or b)){		
		int k = fib(n, b);
		if(k < 0){
			k = b - 1;
		}
		cout << "Case " << caso++ << ": " << n << " " << b << " " << k << endl;
	}

    return 0;
}
