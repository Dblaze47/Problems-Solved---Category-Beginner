#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;
#define sf scanf
#define pf printf
#define read(x_) scanf("%d", &x_)

bool ifFits(int A, int B, int P, int Q){
    double a = (double)A, b = (double)B, p = (double)P, q = (double)Q;
    if (p<=a && q<=b){return true;}
    else if(p>a && q>b){return false;}
    else if (p>a && (((a+b)/(p+q))*((a+b)/(p+q)) + ((a-b)/(p-q))*((a-b)/(p-q)))>=2){return true;}
    else {return false;}
}


int main() {
    int T;
    int a, b, x, y;
    read(T);
    while (T--){
        sf("%d%d%d%d", &a, &b, &x, &y);
        if (ifFits(max(a,b), min(a,b), max(x,y), min(x,y))) {pf("Escape is possible.\n");}
        else {pf("Box cannot be dropped.\n");}
    }
    return 0;
}
