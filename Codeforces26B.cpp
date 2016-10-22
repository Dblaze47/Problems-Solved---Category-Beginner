#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    string s;
    int i, len = 0, left = 0, right = 0;
    cin>>s;
    len = s.size();
    for(i = 0; i<len; ++i){
        if(s[i] == '('){left++;}
        if(s[i] == ')'){
            right++;
            if(left<right){
                right--;
            }
        }
    }
    if(left > right){left = right;}
    cout<<(right+left);
    return 0;
}
