#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>

#define take_i(_x) scanf("%d", &_x)
#define take_s(_x) scanf("%s", _x)

using namespace std;
const int sz = 1e6;
char s[sz+10];


int main (){
    int T, n;
    take_i(T);
    while (T--){
        scanf("%s", s);
        int len = strlen(s);

        char str[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i,j;
        char a[2],b[2];

        take_i(n);

        while (n--){
            take_s(a);
            take_s(b);
            for (j='A'-'A'; j<='Z'-'A'; j++){
                if (str[j] == b[0]){
                    str[j] = a[0];
                }
            }
        }

        for (i=0; i<len; i++) {
            if(s[i] != '_') {
                s[i] = str[ s[i]-'A' ];
            }
        }
        printf("%s\n", s);
    }
    return 0;
}
