#include<iostream>
#include<cstdio>
using namespace std;
#define pf printf
#define sf scanf

int main(){
    int s, n, x_i, y_i;
    sf("%d%d", &s, &n);
    int drag[n];
    int bonus[n];
    int i, cnt = 0;
    for(i = 0; i<n; ++i){
        sf("%d%d", &drag[i], &bonus[i]);
    }
    for(i = 0; i<n; ++i){
        if(drag[i]<s && drag[i]!=-1)
        {
            cnt++;
            s += bonus[i];
            drag[i] = -1;
            i = -1;
        }
    }
    if(cnt == n){pf("YES");}
    else {pf("NO");}
    return 0;
}
