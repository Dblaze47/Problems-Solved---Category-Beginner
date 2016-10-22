#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int ans[27];


int main (){
    int T,i,k,n,m,len;
    char j,dump;
    scanf("%d%c",&T,&dump);
    for (i=1; i<=T; i++){
        char input[1024];
        fgets(input, 100, stdin);
        int len = strlen(input);
        if (input[len-1]!= '\0'){
            input[len-1] = '\0';
            len--;
        }
        printf("Case %d: ", i);
        for (j = 'a' ;j<='z';j++){
            for (k=0; input[k];k++){
                if (input[k] == j){
                    ans[j-97] = 1;
                    break;
                  }
              }
        }
        n = 26;
        for (k=25; k>=0; k--){
            if (ans[k] != 1){
            	printf("%c", (k+97));
                n--;
            }
         }
        if (n == 26){printf("Happy Typing Progya!!");}
        printf("\n");
    }

    return 0;
}
