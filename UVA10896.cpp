#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
#define take_i(_x) scanf("%d", &_x)
#define take_s(_x) scanf("%s", _x)

string enc[75];
char wr[20];
int ans[27];

int finddiff(string w, string s){
    int a, m, n;
    int d[27];
    for (m = 0; m<sizeof(w)-1; m++){
        d[m] = s[m] - w[m];
        if (d[m] < 0){
            d[m] += 26;
        }
    }
    size_t size = sizeof(d)/sizeof(d[0]);
    for (n = 1; n<size; n++){
        if (d[n] == d[n-1]){
            continue;
        }
        else return 0;
    }
        int y = d[0];
        return y;
}


int main (){
    int n;
    take_i(n);
    while (n--){
        int i = 0, j = 0;
        char ch;
        int ans[27];
         while(cin>>enc[i] && cin.get(ch) && ch!='\n'){
                i++;
        }

        scanf("%s", wr);
        int len1 = strlen(wr);
        for (j = 0; j<i; j++){
            if (len1 == enc[j].size()){
              int x = finddiff(wr, enc[j]);
              if (x>0){
                    ans[x] = 1;
                }
            }
        }
        for (i = 0; i<27; i++){
            if (ans[i] == 1){
            printf("%c", ans[i]+97);
            }
        }
    }
    return 0;
}
