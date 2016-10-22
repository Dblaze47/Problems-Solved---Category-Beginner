#include<iostream>
#include<cstdio>

int countprime (int a, int b){
    int cnt=0,c;
    for (a; a<=b; a++){
        for(c=2; c<a; c++){
            if (a%c == 0){
                break;
            }
        }
        if ( c == a){
            cnt++;
        }
    }
return cnt;
}

int main (){
    int i,n,t,L,R;
    scanf("%d", &t);
    i = t;
    for (t=1; t<=i ;t++ ){
        scanf("%d %d", &L,&R);
        if ((L>=1)&&(L<=R)&&(R<=500)){
            n = countprime (L,R);
            printf("Case %d: There are %d numbers between %d and %d.\n", t,n,L,R);
        }
    }
return 0;
}
