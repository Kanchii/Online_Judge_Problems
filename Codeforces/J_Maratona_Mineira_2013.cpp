#include <bits/stdc++.h>
using namespace std;

int dist[1005];
int gaso[1005];
int n;

int simula(int start, int dir){
    long long totGaso = 0;
    int aux = start;
    for(int i = 0; i < n; i++){
        //cout << totGaso << endl;
        totGaso += gaso[aux];
        int next = aux + dir;
        if(next >= n){
            next = 0;
        } else if(next < 0){
            next = n - 1;
        }
        if(dir > 0){
            if(dist[aux] <= totGaso){
                totGaso -= dist[aux];
            } else {
                return 0;
            }
        } else {
            if(dist[next] <= totGaso){
                totGaso -= dist[next];
            } else {
                return 0;
            }
        }
        aux = next;
        if(aux == start){
            return 1;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    while(cin >> n and n){
        for(int i = 0; i < n; i++){
            cin >> gaso[i];
        }
        for(int i = 0; i < n; i++){
            cin >> dist[i];
        }
        //Horario
        int resh = -1;
        for(int i = 0; i < n; i++){
            if(simula(i, 1)){
                resh = i + 1;
                break;
            }
        }
        int resah = -1;
        for(int i = 0; i < n; i++){
            if(simula(i, -1)){
                resah = i + 1;
                break;
            }
        }
        cout << resh << " " << resah << endl;
    }

    return 0;
}
