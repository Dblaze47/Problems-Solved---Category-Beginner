#include<iostream>
#include<sstream>
#include<map>
using namespace std;

int main(){
    string s1, s2, str;
    map<string, string> Dictionary;
    getline(cin, str);
    while(str != ""){
        stringstream trans(str);
        trans>>s1>>s2;
        Dictionary.insert(make_pair(s2, s1));
        getline(cin, str);
    }
    while(cin>>str){
        if(Dictionary.find(str) != Dictionary.end()){cout<<Dictionary[str]<<endl;}
        else{cout<<"eh"<<endl;}

    }
    return 0;
}
