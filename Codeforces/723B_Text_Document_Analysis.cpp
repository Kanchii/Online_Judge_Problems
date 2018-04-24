#include <bits/stdc++.h>

using namespace std;

#define INF (((1LL) << (31)) - 1)
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define PI 2 * acos(0.0)
#define MAX 1000100
#define MOD 1000000007
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
private:
    int precision;
    bool charSpace;
public:

    /* CONSTRUTOR */
    IO(){
        precision = 3;
        charSpace = false;
    }

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
    		a = a * 10 + c - '0', c = getchar();
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
        char c = getchar();
        s = "";
        while(c != ' ' and c != '\n'){
            s += c;
            c = getchar();
        }
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
        if(charSpace){
            c = getchar();
        } else {
            c = getchar();
            while(c == '\0' or c == ' ' or c == '\n'){
                c = getchar();
            }
        }
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
        int t = floor(log10(x)) + 1;
        buff[t] = '\0';
        while(t > 0){
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
        int t = floor(log10(x)) + 1;
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
        int t = floor(log10(x)) + 1;
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
        int t = floor(log10(x)) + 1;
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

IO io = IO();

int main(){

    int n;
    io >> n;
    string s;
    io >> s;

    vector<string> out, in;
    string aux = "";
    for(char c : s){
        if(c == ')'){
            in.emplace_back(aux);
            aux = "";
        } else if(c == '('){
            if(aux.size() > 0){
                out.emplace_back(aux);
                aux = "";
            }
        } else {
            aux += c;
        }
    }

    if(aux.size() > 0){
        out.emplace_back(aux);
    }

    int maxi = 0, cnt = 0;
    char *pch;
    for(string ss : out){
        pch = strtok((char *)ss.c_str(), "_");
        while(pch != NULL){
            maxi = max(maxi, strlen(pch));
            pch = strtok(NULL, "_");
        }
    }

    for(string ss : in){
        pch = strtok((char *)ss.c_str(), "_");
        while(pch != NULL){
            if(strlen(pch) > 0){
                cnt++;
            }
            pch = strtok(NULL, "_");
        }
    }

    io << maxi << " " << cnt << endl;

    return 0;
}
