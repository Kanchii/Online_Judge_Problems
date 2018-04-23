#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define DINF (1.0 / 0.0)
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 100000
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

    IO & operator << (int &x){
        if(x == 0){
            putchar('0');
            return *this;
        }
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

map<string, int> mapa;
map<int, string> mapaR;
vvii adj;

int ord(const pair<int, ii> &a, const pair<int, ii> &b){
    if(a.snd.fst == b.snd.fst){
        return a.snd.snd < b.snd.snd;
    }
    return a.snd.fst > b.snd.fst;
}

/*
    15
    aawtvezfntstrcpgbzjbf 681
    zhahpvqiptvksnbjkdvmknb -74
    aawtvezfntstrcpgbzjbf 661
    jpdwmyke 474
    aawtvezfntstrcpgbzjbf -547
    aawtvezfntstrcpgbzjbf 600
    zhahpvqiptvksnbjkdvmknb -11
    jpdwmyke 711
    bjmj 652
    aawtvezfntstrcpgbzjbf -1000
    aawtvezfntstrcpgbzjbf -171
    bjmj -302
    aawtvezfntstrcpgbzjbf 961
    zhahpvqiptvksnbjkdvmknb 848
    bjmj -735
*/

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    IO io = IO();

    int n;
    io >> n;

    adj.assign(n + 5, vii());

    int id = 0;

    for(int i = 0; i < n; i++){
        string s;
        int x;
        io >> s >> x;

        if(mapa.count(s) == 0){
            mapa[s] = id;
            mapaR[id] = s;
            adj[id++].emplace_back(x, i);
        } else {
            int idx = mapa[s];
            int pt = adj[idx][adj[idx].size() - 1].fst + x;
            adj[idx].emplace_back(pt, i);
        }
    }

    vector<pair<int, ii> > v;

    for(int i = 0; i < id; i++){
        int ptF = adj[i][adj[i].size() - 1].fst;
        for(int j = 0; j < (int)adj[i].size(); j++){
            if(adj[i][j].fst >= ptF){
                v.push_back(make_pair(i, make_pair(ptF, adj[i][j].snd)));
                break;
            }
        }
    }
    sort(v.begin(), v.end(), ord);

    /*for(pair<int, ii> p : v){
        io << mapaR[p.fst] << " " << p.snd.fst << " " << p.snd.snd << endl;
    }*/

    //io << endl;

    io << mapaR[v[0].fst] << endl;

    return 0;
}
