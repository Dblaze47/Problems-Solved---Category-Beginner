#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;
#define sf scanf
#define pf printf
const double pi = 2 * acos (0.0);


int main () {
    int i, T;
    sf("%d", &T);
    for (i = 1; i<=T; i++){
        double r, d, areaCirc = 0, areaSqr = 0, areaShad = 0;
        sf("%lf", &r);
        d = 2 * r;
        areaCirc = pi * r * r;
        areaSqr = d * d;
        areaShad = areaSqr - areaCirc;
        pf("Case %d: %.2lf\n", i, areaShad);

    }
    return 0;
}
