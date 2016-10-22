#include<iostream>
#include<cstdio>
using namespace std;

bool Leap(int N){
    if (((N%4==0) && (N%100!=0))||(N%400==0)){
        return 1;
    }
    return 0;
}
bool Hulu(int N){
    if (N%15==0){
        return 1;
    }
    return 0;
}
bool Buku(int N){
    if(Leap(N)){
        if(N%55==0){
            return 1;
        }
    }
    return 0;
}

int main (){
    int N,i,j,k;
    while (scanf("%d", &N) == 1){
        i = Leap(N);
        j = Hulu(N);
        k = Buku(N);
        if (i == 1){
            printf("This is leap year.\n");
            if (j == 1){
               printf("This is huluculu festival year.\n");
            }
            if (k == 1){
               printf("This is bulukulu festival year.\n");
            }
        }
        else if (j == 1){
            printf("This is huluculu festival year.\n");
        }
        else {
            printf("This is an ordinary year.\n");
        }
        printf("\n");
        i = j = k = 0;
    }
    return 0;
}
