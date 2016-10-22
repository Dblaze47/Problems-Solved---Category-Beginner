#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
#define pf printf
#define sf scanf


template <class T>bool strPal(T& s){int i,j; for (i= 0, j = strlen(s)-1; i<j;i++,j--){if (s[i] == s[j]) continue; else return false;}if (i >= j)return true;}
template <class T>bool intPal(T& n){int rev= 0, bu= n;while(bu){rev = (bu%10) + rev*10;bu /= 10;}return rev == n;}
template <class T>void elm(T& s,int len){if(s[len-1]!='\0'){s[len-1] ='\0';len--;}}
template <class T>int toDeci(T& n){int d = 0;for(int i= 0; n; i++){if(n % 10 == 0){n /= 10;}else {d += 1<<i;n /= 10;}}return d;}
template <class T>int toBin(T& n){int b = 0, p;for(int j=0; n; j++){if ( n%2 == 1){p = 1;for (int k=0; k<j; k++){p = p * 10;}b += p;}n /= 2;}return b;}
//need to make templates for taking bin input from string, and output a bin as a string;
template <class T>int revNum(T& n){int rem = 0, rev = 0;while ( n != 0){rem = n % 10;rev = (rev * 10) + rem; n /= 10;}return rev;}
template <class T>bool ifPrime(T& n){int i;long long sqrtN = sqrt((double)n); for (i=2;i<=sqrtN; i++){if (n%i == 0)return 0;}return 1;}
template <class T>bool odd(T& n){int i; if(n%2 != 0)return 1; else return 0;}
//for ascending sorting use  : sort(arr, arr+N); where N is the index till which to sort
// for descending selection sort use: sort(arr, arr+N, Dsortcmp)
bool Dsortcmp(int a, int b){
    if (a<0 && b<0){return a>b;}
    if (a>=0 && b>=0){return a>b;}
    if ((a>=0 && b<0)||(a<0 && b>=0)){return a>b;}
}

const int SZ = 1e6;
int num[SZ+10], primes[80000];

int divisors(long long n){
    long long N = n, sqrtN = sqrt((double)n);
    int i, cnt = 1, x = 0;
    for (i = 0; primes[i]<=sqrtN; i++){
        if (n%primes[i] == 0){
            while (n%primes[i] == 0){
                x++;
                n /= primes[i];
            }
            sqrtN = sqrt((double)n);
        }
        cnt *= (x+1);
        x = 0;
    }
    if (n!= 1){cnt *= 2;}
    return cnt;
}

void sieve(){
    long long N = 1e9, sqrtN;
    sqrtN = sqrt((double) N);
    int i, j;
    for (i=2; i<=sqrtN; i++){ num[i] = 0;}
    for (i=3; i<=sqrtN; i+=2){
        if (num[i] == 0){
            for (j = i*i; j<=sqrtN; j+= 2*i){
                num[j] = 1;
            }
        }
    }
    int k = 0;
    primes[k] = 2;
    k++;
    for (i=3; i<=sqrtN; i+=2){
        if (num[i]==0){
            primes[k] = i;
            k++;
        }
    }
}


int main () {
    int test;
    sieve();
    sf("%d", &test);
    while(test--){
    long long L,U,P;
    scanf("%lld%lld", &L, &U);
    int D,i,j,k = 0;
    j = U - L;
    if (j<0){
        j *= (-1);
    }
    const int sz = j;
    int nDiv[sz+5];
    for (i = L; i<=U; i++){
        if(i == 1){
            nDiv[k] = 1;
            k++;
        }
        else if (!ifPrime(i)){
            nDiv[k] = divisors(i);
            k++;
        }
        else {
            nDiv[k] = 2;
            k++;
        }
    }
    int mx = -1, idx = 0;
    for (i = 0; i<k; i++){
        if(mx<nDiv[i]){
            mx = nDiv[i];
            idx = i;
        }
    }
    P = idx+L;
    D = mx;
    pf("Between %lld and %lld, %lld has a maximum of %d divisors.\n", L, U, P, D);
    }
    return 0;
}
