#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;


int main(){
    int i, T;
    cin>>T;
    for(i = 1; i<=T; i++){
        int a, b, c, d, j, k;
        int m = 0, n = 0, o = 0, p = 0;
        cin>>a;
        cin.ignore();
        cin>>b;
        cin.ignore();
        cin>>c;
        cin.ignore();
        cin>>d;
        cin.ignore();
        string str;
        cin>>str;
        for(j = 0; j<str.size(); j++){
            if(str[j] == '.'){str[j] = ' ';}
        }
        stringstream ss(str);
        string s1, s2, s3, s4;
        ss>>s1>>s2>>s3>>s4;
        for(j = s1.size()-1, k = 0; j>=0; j--, k++){
            if(s1[j] == '1'){m += (1<<k);}
        }
        for(j = s2.size()-1, k = 0; j>=0; j--, k++){
            if(s2[j] == '1'){n += (1<<k);}
        }
        for(j = s3.size()-1, k = 0; j>=0; j--, k++){
            if(s3[j] == '1'){o += (1<<k);}
        }
        for(j = s4.size()-1, k = 0; j>=0; j--, k++){
            if(s4[j] == '1'){p += (1<<k);}
        }
        if(a == m){a = 1;}
        if(b == n){b = 1;}
        if(c == o){c = 1;}
        if(d == p){d = 1;}
        cout<<"Case "<<i<<": ";
        if(a == 1 && b == 1 && c == 1 && d== 1){cout<<"Yes"<<endl;}
        else{cout<<"No"<<endl;}
    }
    return 0;
}
