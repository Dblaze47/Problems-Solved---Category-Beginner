#include<iostream>
#include<cstdio>

int main () {
    int a,b,n,i,j,T;
    scanf("%d",&T);
    for (i=0; i<T; i++){
        scanf("%d", &n);
        if( n<0){
            break;
        }
        if (n>=10) {
            if(n>20){
            break;
            }
            a = 10;
            b = n-a;
            printf("%d %d\n",a,b);
            }

        else {
            a = n;
            b = n-a;
            printf("%d %d\n",a,b);
            }
    }
    return 0;
}
