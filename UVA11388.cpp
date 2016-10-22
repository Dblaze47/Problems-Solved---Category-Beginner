#include<iostream>
#include<cstdio>
#include<cmath>
#define sf scanf
#define pf printf
using namespace std;

int main() {
    int T;
    sf("%d", &T);
    while(T--){
        int G, L;
        sf("%d%d", &G,&L);
        if(L%G != 0) {pf("-1\n");}
        else {pf("%d %d\n", G,L);}
    }
    return 0;
}
