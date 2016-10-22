#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;


int main(){
    int n;
    string stones;
    cin>>n>>stones;
    int i, cnt = 0;
    for(i = 0; i<n; ++i){
        if(stones[i] == stones[i+1]){cnt++;}
    }
    cout<<cnt;
    return 0;
}
