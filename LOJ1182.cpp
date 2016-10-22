#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int n = 11;
    string str;

    int i = 31;
    while((n & 1<<i)== 0){
        --i;
    }
    for (; i>=0; --i){
        if((n & 1<<i)!= 0){
            str += '1';
        }
        else str += '0';
        }
    }
    return 0;
}
