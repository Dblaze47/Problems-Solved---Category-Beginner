#include<iostream>
#include<cstring>
#include<iomanip>
#include<cstdio>
#include<map>
using namespace std;

int main(){
    int N;
    cin>>N;
    while(N--){
        int K, x, M;
        long long len;
        map<char, int> table;
        long double cost = 0;
        char ch;
        string str, input;
        cin>>K;
        cin.ignore();
        while(K--){
            cin>>ch>>x;
            table[ch] = x;
        }
        cin>>M;
        cin.ignore();
        while(M--){
            getline(cin, input);
            str += input;
        }
        len = str.size();
        for(int i = 0; i<len; i++){
            ch = str[i];
            if(table.find(ch)!=table.end()){cost += table[ch];}
            else{cost += 0;}
        }
        cout<<fixed<<setprecision(2)<<(cost/100)<<"$"<<endl;
    }

}
