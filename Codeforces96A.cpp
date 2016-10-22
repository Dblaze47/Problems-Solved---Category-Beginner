#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main (){
    char S[500];
    fgets(S, sizeof(S), stdin);
    int len = strlen(S);
    if (S[len-1] != '\0'){
        S[len-1] = '\0';
        len -- ;
    }

    int i,x=0,y=0;
    for (i=0; i<len; i++){
        if (S[i] == '0'){
            x++;
            y = 0;
        }
        else if (S[i] == '1'){
            y++;
            x = 0;
        }
        if(( x == 7)||(y == 7)){
            break;
        }
    }
    if ((x==7)||(y == 7)){
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}
