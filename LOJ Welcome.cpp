#include<stdio.h>

int main (){
    int T, a, b, n, sum;
    scanf("%d", &T);
    for (n=1; n<=T; n++){
        sum = 0;
        scanf("%d %d", &a,&b);
        sum = a + b;
        printf("Case %d: %d\n", n, sum);
    }
    return 0;
}
