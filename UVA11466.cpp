#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
#define pf printf
#define sf scanf

const int SZ = 1e7;
int num[SZ+10], primes[665000];

void sieve(){
    long long sqrtN;
    sqrtN = sqrt((double) SZ);
    int i, j;
    for (i=3; i<=sqrtN; i+=2){
        if (num[i] == 0){
            for (j = i*i; j<=SZ; j+= 2*i){
                num[j] = 1;
            }
        }
    }
    int k = 0;
    primes[k++] = 2;
    for (i=3; i<SZ; i+=2){
        if (num[i]==0){
            primes[k++] = i;
        }
    }
}
long long pmdivisors(long long n){
        long long x = 0, sqrtN = sqrt((double)n);
        int i, cnt = 0;
        for (i=0; primes[i]<=sqrtN; i++){
        if ( n%primes[i] == 0){
            cnt++;
            x = primes[i];
            while (n%primes[i] == 0){
                n /= primes[i];
                }
            sqrtN = sqrt ((double)n);
           }
        }
        if (n!=1){
            cnt++;
            x = n;
            }
        return cnt>1 ? x: -1;
}

int main () {
    sieve();
    long long n;
    while((scanf("%lld", &n) == 1) && n != 0){
        if (n<0){ n *= (-1);}
        long long x = pmdivisors(n);
        pf("%lld\n", x);
    }
    return 0;
}
