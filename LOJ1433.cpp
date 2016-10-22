#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
#define sf scanf
#define pf printf
#define read(x_) scanf("%d", &x_)

int main () {
    int T, i;
    read(T);
    for(i = 1; i<=T; i++){
        int Ox,Oy,Ax,Ay,Bx,By, X, Y;
        double r, arclen, w, alpha;
        sf("%d%d%d%d%d%d", &Ox,&Oy,&Ax,&Ay,&Bx,&By);
        X = abs(Ox-Ax);
        Y = abs(Oy-Ay);
        r = sqrt(X*X + Y*Y);
        w = sqrt(((Ax-Bx)*(Ax-Bx))+((Ay-By)*(Ay-By)));
        alpha = 2 * asin(w/(2*r));
        arclen = alpha * r;
        pf("Case %d: %.8lf\n", i,arclen);

    }

    return 0;
}
