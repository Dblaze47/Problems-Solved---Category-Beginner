#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n;
    while(cin>>n && n!=0){
        int i, j = 0, x;
        stack<int> alley;
        int arr[n];
        for(i = 0; i<n; i++){
            cin>>x;
            while(!alley.empty() && alley.top()<x){
                arr[j++] = alley.top();
                alley.pop();
            }
            alley.push(x);
        }
        while(!alley.empty()){arr[j++] = alley.top(); alley.pop();}
        for(i = 1; i<n; i++){
            if(arr[i]<arr[i-1]){break;}
        }
        if(i == n){cout<<"yes"<<endl;}
        else{cout<<"no"<<endl;}
    }
    return 0;
}
