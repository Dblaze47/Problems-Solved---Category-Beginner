#include<iostream>
using namespace std;

int main(){
    int N;
    while(cin>>N && N!=0){
        int arr[N];
        int x, mx = 0, streak = 0;
        for(int i = 0; i<N; i++){
            if(streak < 0){streak = 0;}
            cin>>x;
            streak += x;
            if(mx < streak){mx = streak;}
        }
        if(mx > 0){cout<<"The maximum winning streak is "<<mx<<"."<<endl;}
        else {cout<<"Losing streak."<<endl;}
    }

    return 0;
}
