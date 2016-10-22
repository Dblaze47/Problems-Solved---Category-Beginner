#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n && n!=0){
        int diff = 0, full = 0;
        while(n != 0){
            n += diff;
            full += (n/3);
            diff = n%3;
            n /= 3;
        }
        if(diff == 2){full++;};
        cout<<full<<endl;
    }
    return 0;
}
