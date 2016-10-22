#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int i = 0, n;
    cin>>n;
    long long sum1 = 0, sum2 = 0, sum3 = 0;
    long long x, first, second;
    while(i<n){
        cin>>x;
        sum1 += x;
        i++;
    }
    i = 0;
    while(i<(n-1)){
        cin>>x;
        sum2 += x;
        i++;
    }
    i = 0;
    first = sum1 - sum2;
    while(i<(n-2)){
        cin>>x;
        sum3 += x;
        i++;
    }
    second = sum2 - sum3;
    cout<<first<<endl<<second<<endl;
    return 0;
}
