#include <iostream>

using namespace std;

int main() {

    float a, b, c, d, e, f;
    float x, y, z, w, r, s, media;
    int pos;

    x=0;
    y=0;
    z=0;
    w=0;
    r=0;
    s=0;

    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    if(a > 0){
        pos++;
        x = a;
    }
    if(b > 0){
        pos++;
        y = b;
    }
    if(c > 0){
        pos++;
        z = c;
    }
    if(d > 0){
        pos++;
        w = d;
    }
    if(e > 0){
        pos++;
        r = e;
    }
    if(f > 0){
        pos++;
        s = f;
    }

    media = (x+y+z+w+r+s)/pos;

    printf("%d valores positivos\n", pos);
    printf("%.1f\n", media);
    return 0;
}
