#include<iostream>
#include<cstdio>
using namespace std;


int displacement(int v,int t){
return v * t * 2;
}

int main(){
    int v,t;
    while(cin>>v>>t){
        cout<<displacement(v,t)<<endl;
    }
return 0;
}

