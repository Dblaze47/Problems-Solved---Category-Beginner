#include<iostream>
#include<cstdio>

int reverseit (int n){
    int rev= 0, rem;
    while ( n != 0){

        rem = n%10;
        rev = rev*10 + rem;
        n /= 10;
    }
return rev;
}


int main () {
    int N,a,b,i,sum;
    scanf("%d", &N);
    for (i=1; i<=N; i++){
        scanf("%d %d", &a,&b);
        a = reverseit (a);
        b = reverseit (b);
        sum = a + b;
        sum = reverseit (sum);
        printf("%d\n", sum);
    }

    return 0;
}
