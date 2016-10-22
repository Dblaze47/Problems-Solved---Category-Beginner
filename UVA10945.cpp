#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char str[5000];
char S[5000];

int main () {

    while (fgets(str,sizeof(str),stdin)){

        int i = 0, j = 0;
        int len = strlen(str);
        if (str[len-1] != '\0'){
            str[len-1] = '\0';
            len--;
        }
        if ( !strcmp(str,"DONE")) {
            break;
        }
        for (i=0; i<sizeof(S); i++){
            S[i] = '\0';
        }
        for (i = 0, j = 0; i<len; i++){
            if ((str[i]>='a')&&(str[i]<='z')){
                S[j] = str[i];
                j++;
            }
            else if ((str[i]>='A')&&(str[i]<='Z')){
                str[i] = str[i]+32;
                S[j] = str[i];
                j++;
            }
        }
        len = strlen(S);
//        printf("%s,%s\n", str, S);

        for (i = 0,j =len-1; i<j;i++,j--){
            if (S[i] == S[j]){
                continue;
            }
            else break;
        }
        if (i>=j){
            printf("You won't be eaten!\n");
        }
        else {
            printf ("Uh oh..\n");
        }
    }

    return 0;
}
