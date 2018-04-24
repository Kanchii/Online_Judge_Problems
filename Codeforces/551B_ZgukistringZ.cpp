#include <bits/stdc++.h>
using namespace std;

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


int cnt[300], cnt_B[300], cnt_C[300];

int main(){
    cout.sync_with_stdio(false);
    cin.tie(NULL);
    string a, b, c; cin >> a >> b >> c;
    for(char ch : a) cnt[ch]++;
    for(char ch : b) cnt_B[ch]++;
    for(char ch : c) cnt_C[ch]++;

    int cb = 0x3f3f3f3f;
    for(char ch = 'a'; ch <= 'z'; ch++){
        if(cnt_B[ch] != 0){
            cb = min(cb, cnt[ch] / cnt_B[ch]);
        }
    }
    int cc = 0x3f3f3f3f;
    for(char ch = 'a'; ch <= 'z'; ch++){
        if(cnt_C[ch] != 0){
            cc = min(cc, (cnt[ch] - cnt_B[ch]*cb) / cnt_C[ch]);
        }
    }

    int r1 = cb + cc;

    int ccc = 0x3f3f3f3f;
    for(char ch = 'a'; ch <= 'z'; ch++){
        if(cnt_C[ch] != 0){
            ccc = min(ccc, cnt[ch] / cnt_C[ch]);
        }
    }
    int ccb = 0x3f3f3f3f;
    for(char ch = 'a'; ch <= 'z'; ch++){
        if(cnt_B[ch] != 0){
            ccb = min(ccb, (cnt[ch] - cnt_C[ch] * ccc) / cnt_B[ch]);
        }
    }

    int r2 = ccc + ccb;

    if(r1 > r2){

        for(int i = 0; i < cb; i++){
            cout << b;
        }
        // for(char ch : b){
        //     cnt[ch] -= cnt_B[ch] * cb;
        // }
        for(char ch = 'a'; ch <= 'z'; ch++){
            cnt[ch] -= cnt_B[ch] * cb;
        }
        for(int j = 0; j < cc; j++){
            cout << c;
        }
        // for(char ch : c){
        //     cnt[ch] -= cnt_C[ch] * cc;
        // }
        for(char ch = 'a'; ch <= 'z'; ch++){
            cnt[ch] -= cnt_C[ch] * cc;
        }
    } else {
        for(int i = 0; i < ccb; i++){
            cout << b;
        }
        // for(char ch : b){
        //     cnt[ch] -= cnt_B[ch] * ccb;
        // }
        for(char ch = 'a'; ch <= 'z'; ch++){
            cnt[ch] -= cnt_B[ch] * ccb;
        }
        for(int j = 0; j < ccc; j++){
            cout << c;
        }
        // for(char ch : c){
        //     cnt[ch] -= cnt_C[ch] * ccc;
        // }
        for(char ch = 'a'; ch <= 'z'; ch++){
            cnt[ch] -= cnt_C[ch] * ccc;
        }
    }
    for(char ch = 'a'; ch <= 'z'; ch++){
        if(cnt[ch] > 0){
            for(int j = 0; j < cnt[ch]; j++){
                cout << ch;
            }
        }
    } cout << endl;

    return 0;
}
