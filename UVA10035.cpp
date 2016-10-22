#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main () {
    char str1[15], str2[15];
    while(scanf("%s%s", str1, str2) && str1[0] != '0' && str2[0] != '0'){
        int i, sum, temp, carry = 0, len;
        len = strlen(str1);
        for (i = len-1; i>=0; --i){
            sum = (str1[i]-'0') + (str2[i]-'0');
            if(sum >= 10){
                temp = sum%10;
                if((i-1)>0){
                    str1[i-1] += (temp+'0');
                    carry++;
                }
                else carry++;
            }
        }
        if(carry == 0) printf("No carry operations.\n");
        else if (carry == 1)printf("%d carry operation.\n", carry);
        else printf("%d carry operations.\n", carry);
    }

    return 0;
}
