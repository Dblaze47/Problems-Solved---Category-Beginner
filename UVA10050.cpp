#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int i, N, x, j, P, days = 0;
        cin>>N>>P;
        const int sz = (N+1);
        const int h = P;
        int week[sz], para[h];
        for(i = 0; i<h; i++){
            cin>>para[i];
        }
        for(i = 1; i<sz; i++){
            if(i%7 == 0 || i%7 == 6){week[i] = 0;}
            else{week[i] = -1;}
        }
        for(i = 0; i<h; i++){
            x = para[i];
            for(j = x; j<sz; j+=x){
                if(week[j]!=0){week[j] = 1;}
            }
        }
        for(i = 1; i<sz; i++){
            if(week[i] == 1){days++;}
        }
        cout<<days<<endl;
    }
    return 0;
}
