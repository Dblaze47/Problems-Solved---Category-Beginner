#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    char str1[] = "one";
    char str2[] = "two";
    while(t--){
        char s[6];
        int i, len = 0, diff1 = 0, diff2 = 0;
        scanf("%s", s);
        len = strlen(s);
        if(len == 3){
            for(i = 0; i<3; ++i){
                if(s[i] != str1[i]){diff1++;}
                if(s[i] != str2[i]){diff2++;}
            }
            if(diff1<=1 && diff2<=1){
                if(diff1<diff2){printf("1\n");}
                else {printf("2\n");}
            }
            else if(diff1<=1){printf("1\n");}
            else if(diff2<=1){printf("2\n");}
        }
        else if (len == 5){printf("3\n");}
    }
    return 0;
}
