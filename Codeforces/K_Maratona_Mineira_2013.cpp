/*
    Código que dá um TLE nervoso

    Complexidade: O(q * logn) (q -> número de queries)

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int MAXN = 1e6 + 5;
ll ft[MAXN];

void update(int p, int v){
    for (; p <= MAXN; p += p&(-p))
        ft[p] += v;
}

void update(int a, int b, int v){
    update(a, v);
    update(b + 1, -v);
}

ll query(int b){
  ll sum = 0;
  for(; b > 0; b -= b&(-b))
    sum += ft[b];
  return sum;
}

inline void getInt(int &n)  //pass an integer by value
{
  n = 0;
  int ch = getchar();
  int sign = 1;

  while (ch<'0' || ch>'9')  // if the input character is not a digit
  {
    if (ch == '-')
    {
      sign = -1;
    }
    ch = getchar();
  }

  while (ch >= '0' && ch <= '9')
  {
    n = (n << 3) + (n << 1) + ch - '0';  //multiply by 10
    ch = getchar();
  }

  n *= sign;  // for negative numbers
}

int main(){
    int n;
    while(getInt(n), n != 0){//
        memset(ft, 0, sizeof ft);
        bool flag = true;
        printf("MENSAGEM = [");
        for(int i = 0; i < n;){
            int op; getInt(op);
            if(op == 0){
                flag = false;
            }
            if(flag){
                if(op == 18){
                    int x, y, w; getInt(x); getInt(y); getInt(w);
                    i += 4;
                    update(x, y, w);
                }
                else if(op == 42){
                    int x; getInt(x);
                    ll r = query(x);
                    ll l = query(x - 1);
                    if(r - l < 0){
                        printf(" ");
                    } else {
                        int diff = (r - l) % 26LL;
                        printf("%c",('A' + diff));
                    }
                    i+=2;
                }
            }
            else{
                i++;
            }
        }

        printf("]\n");

    }
    return 0;
}
