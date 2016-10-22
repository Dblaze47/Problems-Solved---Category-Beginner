#include<iostream>
#include<algorithm>
using namespace std;



int main(){
    int n;
    cin>>n;
    int i, x;
    int arr[1005];
    for(i = 0; i<1005; i++){
        arr[i] = 0;
    }
    for(i = 0; i<n; i++){
        cin>>x;
        arr[x] = 1;
    }
    x = 0;
    for(i = 1; i<1005; i++){
        if(i+2 < 1005){
            if(arr[i] == 1 && arr[i+1] == 1 && arr[i+2] == 1){x = 1;break;}
        }
    }
    if(x == 1){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    return 0;
}
