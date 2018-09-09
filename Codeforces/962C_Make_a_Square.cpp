#include <bits/stdc++.h>
using namespace std;

#define INF 1e18

typedef long long ll;

map<string, ll> mapa;

string tira(string num, int pos){
    string aux = num;
    aux.erase(aux.begin() + pos);
    return aux;
}

ll solve(string tmp){
    if(tmp == "") return INF;
    if(mapa.count(tmp) > 0) return mapa[tmp];
    ll tmpp = (ll)stoll(tmp);
    ll x = (int)sqrt(tmpp);
    if(x * x == tmpp) return 0;
    int tam = tmp.size();
    ll res = INF;
    for(int i = 0; i < tam; i++){
        if(!i and tam > 1){
            if(tmp[i + 1] == '0') continue;
        }
        res = min(res, solve(tira(tmp, i)) + 1);
    }
    return mapa[tmp] = res;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s;
    cin >> s;
    ll r = solve(s);
    if(r == INF) cout << -1 << endl;
    else cout << r << endl;

    return 0;
}
