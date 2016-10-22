#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
char str[5000];


int main () {
    int len, i, j;
    for (i =0; i<sizeof(str);i++){
        str[i] = '\0';
    }
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    if (str[len-1] != '\0'){
        str[len-1] = '\0';
        len--;
    }
    for (i = 0; i<len; i++){
        if (str[i] == 'W' && str[i+1] == 'U' && str[i+2]== 'B'){
            str[i] = 'a';
            str[i+1] = 'a';
            str [i+2] = 'a';
            i += 2;
        }

    }
    for (i = 0; i<len; i++){
        if (str[i]>='A' && str[i]<='Z'){
            for (j=i; j<len; j++,i++){
                if (str[j] == 'a'){
                    break;
                }
                printf("%c", str[j]);
            }
            printf(" ");
        }

    }
    return 0;
}
