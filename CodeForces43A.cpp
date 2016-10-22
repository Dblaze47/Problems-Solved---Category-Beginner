#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
char str1[20],str2[20],str3[20];

int main () {
    int i, n, k,team1=0, team2=0;
    char dump;
    scanf("%d", &n);
    scanf("%s", &str1);
    team1++;
    for (i=1; i<n; i++){
        scanf("%s", &str2);
        if ( !strcmp(str1, str2)){
            team1++;
        }
        else {
            strcpy(str3, str2);
            team2++;
        }
    }
    if (team1>team2){
        fputs(str1, stdout);
    }
    else fputs(str3,stdout);
    return 0;
}
