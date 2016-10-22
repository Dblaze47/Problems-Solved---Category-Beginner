#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
#define sf scanf
#define pf printf


int main() {
    int T;
    sf("%d", &T);
    for(int i = 1; i<=T; i++){
        long long S;
        cin>>S;
        long long diff;
        long long N = ceil(sqrt((double)S));
        long long x = 0, y = 0;
        diff = (N*N) - S;
        if (N%2 != 0){
            if(diff == 0){
                x = 1;
                y = N;
                pf("Case %d: %lld %lld\n", i, x, y);
            }
            else if (diff <= (N-1)){
                x = diff + 1;
                y = N;
                pf("Case %d: %lld %lld\n", i, x, y);
            }
            else if (diff > (N-1)){
                x = N;
                diff -= (N-1);
                y = N - diff;
                pf("Case %d: %lld %lld\n", i, x, y);
            }
        }
        else {
            if(diff == 0){
                x = N;
                y = 1;
                pf("Case %d: %lld %lld\n", i, x, y);
            }
            else if (diff <= (N-1)){
                x = N;
                y = 1 + diff;
                pf("Case %d: %lld %lld\n", i, x, y);
            }
            else if (diff > (N-1)){
                y = N;
                diff -= (N-1);
                x = N - diff;
                pf("Case %d: %lld %lld\n", i, x, y);
            }
        }
    }
    return 0;
}
