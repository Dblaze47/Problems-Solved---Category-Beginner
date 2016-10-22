#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;



int main (){
    int N,i,j,k,y;
    char cnt[26] = {0};
    char trash;
    scanf("%d%c", &N,&trash);

    for (i = 0; i<N; i++){
        char S[5000];
//        gets(S);
//        puts(S);
        fgets (S, sizeof(S), stdin);
        int len = strlen(S);
        if (S[len-1] != '\0'){
            S[len-1] = '\0';
            len--;
        }
//        fputs(S, stdout);
        for (y=0; y<len; y++){
            if ((S[y]>='A')&&(S[y]<='Z')){
                cnt[S[y] - 65]++;
                }
            if ((S[y]>='a')&&(S[y]<='z')){
                cnt[S[y]-32-65]++;
                }
            }
        }
    for (int k = 0; k<26; k++){
            int mx = -1, idx=0;
            for (j=0; j<26; j++){
                if (mx<cnt[j]){
                    mx = cnt[j];
                    idx = j;
                }
            }
            if (mx != 0){
                printf("%c %d\n", idx+65, mx);
            }
            cnt[idx] = 0;
    }


    return 0;
}
