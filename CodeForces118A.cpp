#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;


int main (){
    char S[500];
    int i;
    fgets(S, sizeof(S), stdin);
    int len = strlen(S);
    if (S[len-1] != '\0'){
        S[len-1] = '\0';
        len -- ;
    }
    for(i=0; i<len; i++){
        if ((S[i]>='A')&&(S[i]<='Z')){
            S[i] = (S[i]+32);
        }
        if (S[i]==' '){
            S[i] = 'a';
        }
        switch(S[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y': continue;
            }
    printf(".%c", S[i]);
    }

    return 0;
}
