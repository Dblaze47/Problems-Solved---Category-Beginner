#include<iostream>
#include<cstdio>
using namespace std;


int main(){
    int w;
    scanf("%d", &w);
    if(w > 2){
        if(w%2 == 0){printf("YES");}
        else {printf("NO");}
    }
    else {printf("NO");}
    return 0;
}
