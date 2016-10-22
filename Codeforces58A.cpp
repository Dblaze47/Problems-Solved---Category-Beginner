#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main (){
    char a[6] = {'h','e','l','l','o'};
    char s[100];
	scanf("%s", s);
    int n = 0;
    for (int i = 0; i<strlen(s); i++){
        if (s[i] == a[n]){
            n++;
        }
    }
    if (n == 5) printf("YES");
    else printf("NO");
    return 0;
}

