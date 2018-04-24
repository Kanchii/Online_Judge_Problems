#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;

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


int main(){
    cout.sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> vs;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        vs.push_back(s);
    }
    string s; cin >> s;
    int p = -1, pos = 0, len = s.size();
    bool res = true;
    for(int i = 0; i < n; i++){
        bool flag = false;
        p = -1;
        for(; pos < len; pos++){
            if(s[pos] == '<')
                p = pos;
            else if(s[pos] == '3'){
                flag = true;
                break;
            }
        }
        if(!flag){
            res = false;
            break;
        }
        pos++;
        int j;
        for(j = 0; j <(int)vs[i].size() && pos < (int)s.size(); j++){
            while(pos < (int)s.size() && s[pos] != vs[i][j])
                pos++;
            pos++;
        }
        if(j != vs[i].size()){
            res = false;
            break;
        }
        // cout << "achou " << i << endl;
    }
    string coracao = "<3";
    int j;
    for(j = 0; j < 2 && pos < (int)s.size(); j++){
        while(pos < (int)s.size() && s[pos] != coracao[j])
            pos++;
        pos++;
    }
    if(j != 2) res = false;
    if(res) std::cout << "yes" << std::endl;
    else     std::cout << "no" << std::endl;
    return 0;
}
