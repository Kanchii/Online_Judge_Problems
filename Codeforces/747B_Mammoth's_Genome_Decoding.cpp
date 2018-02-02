#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100
#define mp make_pair
#define pb push_back
#define fori(n) for(int i = 0; i < n; i++)
#define forsi(s, n) for(int i = s; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
#define forsj(s, n) for(int j = s; j < n; j++)
#define DEBUG(x) cout << #x << " = " << x << endl
#define prtl(x) cout << x << endl;
#define prt(x) cout << x

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int isGenome(char c){
    return (c == 'A' or c == 'T' or c == 'C' or c == 'G');
};

int getGenomePos(char c){

    switch(c){
        case 'A':
            return 0;
            break;
        case 'T':
            return 1;
            break;
        case 'C':
            return 2;
            break;
        case 'G':
            return 3;
            break;
    }

}

char getGenomeChar(int daVez){
    switch(daVez){
        case 0:
            return 'A';
            break;
        case 1:
            return 'T';
            break;
        case 2:
            return 'C';
            break;
        case 3:
            return 'G';
            break;
    }
}

void setDaVez(int &daVez, int *vet){

    while(daVez < 4 and vet[daVez] == 0){
        daVez++;
    }
}

int main(int argc, char const *argv[]){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int vet[4];

    if(n % 4 != 0){
        cout << "===" << endl;
    } else {
        int obj = n / 4;
        int ok = 1;
        for(int i = 0; i < 4; i++){
            vet[i] = obj;
        }
        for(int i = 0; i < s.size(); i++){
            if(isGenome(s[i])){
                vet[getGenomePos(s[i])]--;
                if(vet[getGenomePos(s[i])] < 0){
                    ok = 0;
                }
            }
        }
        if(!ok){
            cout << "===" << endl;
        } else {

            int daVez = 0;

            setDaVez(daVez, vet);

            for(int i = 0; i < s.size(); i++){
                if(isGenome(s[i])){
                    cout << s[i];
                } else {
                    cout << getGenomeChar(daVez);
                    vet[daVez]--;

                    //cout << "daVez: " << daVez << " | vet[daVez]: " << vet[daVez] << endl;
                    setDaVez(daVez, vet);
                }
            }
            cout << endl;
        }

    }
    
    return 0;
}