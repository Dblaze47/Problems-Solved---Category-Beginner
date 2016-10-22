#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int coins[n];
    int i, sum = 0, hold = 0, cnt = 0;
    for(i = 0; i<n; i++){
        cin>>coins[i];
        sum += coins[i];
    }
    while(hold<=(sum-hold)){
        sort(coins, coins+n);
        hold += coins[n-1];
        coins[n-1] = 0;
        cnt++;
    }
    cout<<cnt;
    return 0;
}
