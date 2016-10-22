#include<iostream>
#include<cstdio>
using namespace std;
#define sf scanf
#define pf printf

void Moves(int n, char* c){
    if(*c == '\0'){return;}
    else if(*c == 'r'){pf("%d\n", n);Moves(n+1, c+1); }
    else if(*c == 'l'){Moves(n+1, c+1); pf("%d\n", n);}
}

int main(){
    const int sz = 1e6;
    char str[sz+10] = "";
    sf("%s", str);
    Moves(1, str);
}
