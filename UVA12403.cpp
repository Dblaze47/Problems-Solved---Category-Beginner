#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int T, balance = 0, x;
    scanf("%d", &T);
    while(T--){
        string str;
        cin>>str;
        if(str == "donate"){
            cin>>x;
            balance += x;
        }
        else if (str == "report"){
            cout<<balance<<endl;
        }
    }
    return 0;
}
