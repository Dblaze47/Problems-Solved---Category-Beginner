#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int T, j;
    cin>>T;
    for(j = 1; j<=T; j++){
        int i, total = 0, term1, term2, fin, att, cltsm;
        int mark[3];
        cin>>term1>>term2>>fin>>att;
        for(i = 0; i<3; i++){
            cin>>mark[i];
        }
        sort(mark, mark+3);
        cltsm = mark[1] + mark[2];
        cltsm /= 2;
        total = term1 + term2 + fin + att + cltsm;
        if(total >= 90){cout<<"Case "<<j<<": A"<<endl;}
        else if(total >= 80 && total<90){cout<<"Case "<<j<<": B"<<endl;}
        else if(total >= 70 && total<80){cout<<"Case "<<j<<": C"<<endl;}
        else if(total >= 60 && total<70){cout<<"Case "<<j<<": D"<<endl;}
        else if(total<60){cout<<"Case "<<j<<": F"<<endl;}
    }
    return 0;
}
