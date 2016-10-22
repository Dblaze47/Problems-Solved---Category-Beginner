#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;


int main () {
    char s[100];
    scanf("%s", s);
    int i, x =0,y =0;
    int len = strlen (s);
    for (i = 0; i<len; i++){
        if (s[i]>='A' && s[i]<='Z'){
            x++;
        }
        else if (s[i]>='a' && s[i]<='z'){
            y++;
        }
    }
    if (x>y) {
        for (i = 0; i<len; i++){
            if (s[i]>='a' && s[i]<='z'){
                s[i] = s[i]-32;
            }
        }
    }
    else {for (i = 0; i<len; i++){
            if (s[i]>='A' && s[i]<='Z'){
                s[i] += 32;
            }
        }
    }

    printf("%s", s);
    return 0;
}
