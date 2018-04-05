#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;

set<ii> s;

void solve(){
    if(s.size() <= 2){
        s.clear();
        return;
    }
    vector<ii> vec;
    for(ii par: s)
        vec.push_back(par);

    vector<double> vd;

    for(int i = 1; i < (int)vec.size(); i++){
        double delta = fabs(atan2(vec[i].second-vec[0].second, vec[i].first-vec[0].first));
        vd.push_back(delta);
    }

    sort(vd.begin(), vd.end());

    int freq = 1, f = 1;
    double maxi = vd.back(); vd.pop_back();
    double last = maxi;

    for(int i = 0; i < (int)vd.size(); i++){
        if(last == vd.back())
            f++;
        else
            f = 1;
        if(f > freq){
            freq = f;
            maxi = last;
        }
        last = vd.back(); vd.pop_back();
    }

    for(int i = 1; i < (int)vec.size(); i++){
        double delta = fabs(atan2(vec[i].second-vec[0].second, vec[i].first-vec[0].first));
        if(delta == maxi)
            s.erase(vec[i]);
    }
    s.erase(vec[0]);

    // cout << maxi << endl;
    // cout << endl;
}

int main(){
    ios::sync_with_stdio(false);

    int n; cin >> n;
    if(n == 1){
        cout << "YES" << endl;
        return 0;
    }

    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        s.insert(ii(x,y));
    }

    solve();
    solve();

    if(s.size() != 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
