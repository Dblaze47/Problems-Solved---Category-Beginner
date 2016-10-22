#include<iostream>
#include<map>
#include <sstream>

#define SSTR( x ) static_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    map<string, int> reg;
    while(n--){
        int x = 1;
        string s, y;
        cin>>s;
        if(reg.find(s) != reg.end()){
            string p;
            p = s;
            y = SSTR(reg[s]);
            p += y;
            reg[s]++;
            reg[p] = x;
            cout<<p<<endl;
        }
        else{reg[s] = x; cout<<"OK"<<endl;}
    }

    return 0;
}
