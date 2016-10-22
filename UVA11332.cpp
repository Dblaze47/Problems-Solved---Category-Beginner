#include<iostream>
#include<cstdio>
using namespace std;

int single(long long n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    if (sum>= 10){return single(sum);}
    else return sum;
}


int main(){
    long long n;
    while(cin>>n && n!=0){
        int x = single(n);
        cout<<x<<endl;
    }
    return 0;
}
