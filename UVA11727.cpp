#include<iostream>
#include<cstdio>
using namespace std;

int saved (){
    int x, i,j,k,z;
    scanf("%d %d %d", &i,&j,&k);
        if (((i>j) && (i<k)) ||((i<j) && (i>k)) ){
            z = i;
        }
        else if (((j>i) && (j<k)) ||((j>k) && (j<i))){
            z = j;
        }
        else if (((k>i) && (k<j)) ||((k<i) && (k>j))){
            z = k;
        }

    return z;
}


int main (){
    int T, n, r;
    scanf("%d", &T);
    for (n=1; n<=T; n++){
        r = saved();
        printf("Case %d: %d", n,r);
        printf("\n");
    }

    return 0;
}
