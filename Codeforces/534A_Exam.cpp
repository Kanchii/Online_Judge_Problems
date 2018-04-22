#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define DINF (1.0 / 0.0)
#define max(a,b) ((a) > (b) ? (a) : (b))
#define max3(a, b, c) (max((a), max((b), (c))))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define min3(a, b, c) (min((a), min((b), (c))))
#define mp make_pair
#define pb push_back
#define PI (2 * acos(0.0))
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define DEBUG(x) cout << #x << " = " << x << endl
#define fst first
#define snd second
#define endl '\n'

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;
typedef unsigned long long llu;

int gi() {
	int w=0;bool q=1;char c=getchar();
	while ((c<'0'||c>'9') && c!='-') c=getchar();
	if (c=='-') q=0,c=getchar();
	while (c>='0'&&c <= '9') w=w*10+c-'0',c=getchar();
	return q? w:-w;
}

inline char getChar(){
	char c;
	while(! isalpha(c = getchar()));
	return c;
}
inline void print(int a){
	if(! a)
		return;
	print(a / 10);
	putchar('0' + a % 10);
}
inline void println(int a){
	if(a < 0)
		putchar('-'), a *= -1;
	if(a == 0)
		putchar('0');
	print(a);
	putchar('\n');
}

class IO {
public:
    IO & operator >> (int &x){
        int a = 0, sgn = 1;
    	char c;
    	while(! isdigit(c = getchar()))
    		if(c == '-')
    			sgn *= -1;
    	while(isdigit(c))
    		a = a * 10 + c - '0', c = getchar();
        x = a * sgn;
        return *this;
    }

    IO & operator >> (long long &x){
        long long a = 0, sgn = 1;
    	char c;
    	while(! isdigit(c = getchar()))
    		if(c == '-')
    			sgn *= -1;
    	while(isdigit(c))
    		a = a * 10 + c - '0', c = getchar();
        x = a * sgn;
        return *this;
    }

    IO & operator << (int &x){
        if(x < 0){
            putchar('-');
            x *= -1;
        }
        char buff[1024];
        int t = floor(log10(x));
        buff[t] = '\0';
        while(x > 0){
            t--;
            buff[t] = ((x % 10) + '0');
            x /= 10;
        }
        while(buff[t] != '\0'){
            putchar(buff[t++]);
        }
        return *this;
    }

    IO & operator << (size_t &x){
        if(x < 0){
            putchar('-');
            x *= -1;
        }
        char buff[1024];
        int t = floor(log10(x));
        buff[t] = '\0';
        while(x > 0){
            t--;
            buff[t] = ((x % 10) + '0');
            x /= 10;
        }
        while(buff[t] != '\0'){
            putchar(buff[t++]);
        }
        return *this;
    }

    IO & operator << (long long &x){
        if(x < 0){
            putchar('-');
            x *= -1;
        }
        char buff[1024];
        int t = floor(log10(x));
        buff[t] = '\0';
        while(x > 0){
            buff[t - 1] = ('0' + x % 10);
            x /= 10;
            t--;
        }
        while(buff[t] != '\0'){
            putchar(buff[t++]);
        }
        return *this;
    }

    IO & operator << (const char *c){
        const char *s = c;
        while(*s != '\0'){
            putchar(*s);
            s++;
        }
        return *this;
    }

    IO & operator << (char *c){
        puts(c);
        return *this;
    }

    IO & operator << (const char c){
        putchar(c);
        return *this;
    }

    IO & operator << (char &c){
        putchar(c);
        return *this;
    }

    IO & operator << (string &s){
        for(char c : s){
            putchar(c);
        }
        return *this;
    }
};

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    IO io = IO();

    int n;
    io >> n;
    vi v;

    if(n == 4){
        for(int i = 3; i >= 1; i -= 2){
            v.emplace_back(i);
        }
        for(int i = 4; i >= 1; i -= 2){
            v.emplace_back(i);
        }
    } else {
        for(int i = (n & 1 ? n : n - 1); i >= 1; i -= 2){
            v.emplace_back(i);
        }
        int s = (n & 1 ? (n - 1) : n);
        if(abs(s - v.back()) > 1){
            for(int i = s; i >= 2; i -= 2){
                v.emplace_back(i);
            }
        }
    }
    int u = v.size();
    io << u << endl;
    for(int u : v){
        io << u << " ";
    }
    io << endl;

    return 0;
}
