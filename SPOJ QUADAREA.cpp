#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;
#define sf scanf
#define pf printf
#define read(x_) scanf("%d", &x_)

int main() {
    int T;
    read(T);
    double a,b,c,d,K,s;
    while(T--){
        a = b = c = d = K = s = 0;
        sf("%lf%lf%lf%lf", &a,&b,&c,&d);
        double s = (a+b+c+d)/2;
        K = sqrt((s-a) * (s-b) * (s-c) * (s-d));
        pf("%.2lf\n", K);
    }
    return 0;
}
