#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
#define pf printf
#define sf scanf
typedef long long LL;
typedef unsigned long long ULL;
const double pi = 2 * acos(0.0);

int main() {
    int t;
    sf("%d", &t);
    while(t){
        int amp, freq, sz;
        sf("%d%d", &amp, &freq);
        sz = (amp*2);
        int arr[sz], m = 0, i = 1 ;
        while(i<amp){
            arr[m++] = i++;
        }
        if(i == amp){arr[m++] = i--;}
        while(i){
            arr[m++] = i--;
        }
        while(freq){
            int j;
            for (i = 0; i<m; i++){
                for(j=0;j<arr[i];j++){
                    pf("%d", arr[i]);
                }
                pf("\n");
            }
        if (t-1!=0 || freq-1 != 0){pf("\n");}
        freq--;
        }
    t--;
    }
    return 0;
}
