#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 100000
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define DEBUG(x) cout << #x << " = " << x << endl
#define endl '\n'

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

class IO {
public:
    /*  LEITURA  */
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
    		a = (a * 10) + (c - '0'), c = getchar();
        x = a * sgn;
        return *this;
    }

    IO & operator >> (unsigned long long &x){
        unsigned long long a = 0;
    	char c;
    	while(! isdigit(c = getchar()))
    		if(c == '-'){
    			x = 0;
                return *this;
            }
    	while(isdigit(c))
    		a = a * 10 + c - '0', c = getchar();
        x = a;
        return *this;
    }

    IO & operator >> (string &s){
        char buff[1024];
        char c = getchar();
        int p = 0;
        while(c != ' ' and c != '\n'){
            buff[p++] = c;
            c = getchar();
        }
        buff[p] = '\0';
        s = string(buff, p);
        return *this;
    }

    IO & operator >> (char *s){
        char buff[1024];
        char c = getchar();
        int p = 0;
        while(c != ' ' and c != '\n'){
            buff[p++] = c;
            c = getchar();
        }
        buff[p] = '\0';
        s = (char *)malloc(sizeof(char) * (p + 5));
        strcpy(s, buff);
        return *this;
    }

    IO & operator >> (char &c){
        c = getchar();
        return *this;
    }

    /*  ESCRITA  */
    IO & operator << (int x){
        if(x == 0){
            putchar('0');
            return *this;
        }
        if(x < 0){
            putchar('-');
            x *= -1;
        }
        char *buff = new char[100];
        int t = ceil(log10(x)) + 1;
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

    IO & operator << (size_t x){
        if(x == 0){
            putchar('0');
            return *this;
        }
        if(x < 0){
            putchar('-');
            x *= -1;
        }
        char *buff = new char[100];
        int t = ceil(log10(x)) + 1;
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

    IO & operator << (long long x){
        if(x == 0){
            putchar('0');
            return *this;
        }
        if(x < 0){
            putchar('-');
            x *= -1;
        }
        char *buff = new char[100];
        int t = ceil(log10(x)) + 1;
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

    IO & operator << (unsigned long long x){
        if(x == 0){
            putchar('0');
            return *this;
        }
        if(x < 0){
            putchar('-');
            putchar('1');
            return *this;
        }
        char *buff = new char[100];
        int t = ceil(log10(x)) + 1;
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
        char *s = c;
        while(*s != '\0'){
            putchar(*s);
            s++;
        }
        return *this;
    }

    IO & operator << (const char &c){
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
    //ios_base::sync_with_stdio(false);
    IO io = IO();

    int n;
    io >> n;
    ll r = 0;
    vi v;

    int tam = 0;
    int o = 0;

    for(int i = 0; i < n; i++){
        int x;
        io >> x;

        if(x == 1 and o){
            v.emplace_back(tam);
            tam = 1;
        } else {
            if(x == 1){
                o = 1;
            }
            if(o){
                tam++;
            }
        }
    }

    if(o) r = 1;

    v.emplace_back(tam);

    for(int i = 0; i < (int)(v.size() - 1); i++){
        r *= v[i];
    }

    io << r << endl;

    return 0;
}
