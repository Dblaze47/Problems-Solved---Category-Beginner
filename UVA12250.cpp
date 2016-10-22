#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    string str;
    int i = 1;
    while (cin>>str && str!="#"){
        if(str == "HELLO"){printf("Case %d: ENGLISH\n", i); ++i;}
        else if (str == "HOLA"){printf("Case %d: SPANISH\n", i); ++i;}
        else if(str == "HALLO"){printf("Case %d: GERMAN\n", i); ++i;}
        else if(str == "BONJOUR"){printf("Case %d: FRENCH\n", i); ++i;}
        else if(str == "CIAO"){printf("Case %d: ITALIAN\n", i); ++i;}
        else if(str == "ZDRAVSTVUJTE"){printf("Case %d: RUSSIAN\n", i); ++i;}
        else {printf("Case %d: UNKNOWN\n", i); ++i;}
    }
    return 0;
}
