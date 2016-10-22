#include<iostream>
#include<cmath>
#include<cstdio>

const int sz=1e6;
int num[sz+10], primes[sz+10];


int main (){
    int i,j,k;
    long long n, sqrtN;
    while (scanf("%lld", &n) == 1){
    //scanf("%lld", &n);
    sqrtN = sqrt ((double) n);
    for (i=2; i<=sqrtN; i++){
        num[i] =0;
    }
    for (i=3; i*i<=sqrtN; i+=2){
        if (num [i] == 0){
            for (j=i*i; j<=sqrtN; j +=i+i){
                num[j] = 1;
            }
        }
    }
    k = 0;
    primes[k] = 2;
    k++;
    for (i=3; i*i<=sqrtN; i+=2){
        if (num[i] == 0){
            primes[k] = i;
            k++;
        }
    }

    for (i=0; primes[i]<=sqrtN; i++){
        if ( n%primes[i] == 0){
            printf("%d\n", primes[i]);
            while (n%primes[i] == 0){
                n /= primes[i];
            }
            sqrtN = sqrt ((double)n);
        }
    }
    if (n!=1){
        printf("%d\n", n);
      }
    }
    return 0;
}
