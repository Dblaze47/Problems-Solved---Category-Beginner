#include<iostream>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <cstring>
using namespace std;
#define pf printf
#define sf scanf
#define loop(i,n) for(i=1 ; i<=n ; i++)
#define sq(x) ((x)*(x))

typedef long long LL;
typedef unsigned long long ULL;
const long long INF = 1<<29;
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
    primes[k] = 2;
    k++;
    for (i=3; i<SZ; i+=2){
        if (num[i]==0){
            primes[k] = i;
            k++;
        }
    }
}

int primefact(long long n)
{
    int i, cnt = 0;
    LL sqrtN = sqrt(double(n));
    for (i=0; primes[i]<=sqrtN; i++){
        if ( n%primes[i] == 0){
            cnt++;
            while (n%primes[i] == 0){
                n /= primes[i];
            }
            sqrtN = sqrt ((double)n);
        }
    }
    if (n!=1){cnt++;}
    return cnt;
}

int main(){
    sieve();
    LL n;
    int x;
    while(sf("%lld", &n) && n!= 0)
    {
        x = primefact(n);
        pf("%lld : %d\n", n, x);
    }

    return 0;
}
