#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> ii;
map<ll, ll> mapa;
vector<ll> v;

/*

    a/b > c/d
    a.d > c.b
*/

ii f(ll i, ll j, ll k){
    return ii(v[k] - v[j], v[k] - v[i]);
}


bool fmax(ii a, ii b){
    return (a.first * b.second >= a.second * b.first);
}

int main(){
    ll n, u; cin >> n >> u;

    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        mapa[x] = i;
        v.push_back(x);
    }

    deque<ll> dq;
    ii res(0,1);
    for(ll i = 0; i < n; i++){
        dq.push_back(v[i]);
        while(dq.back() - dq.front() > u)
            dq.pop_front();
        if(dq.size() < 3)
            continue;
        ll a = mapa[dq.front()], b = a+1, c = mapa[dq.back()];
        ii aux = f(a,b,c);
        if(fmax(aux,res))
            res = aux;

    }
    if((double)res.first / res.second < 1e-9)
        printf("-1\n");
    else
        printf("%.9f\n", (double)(res.first) / res.second);
    return 0;
}
