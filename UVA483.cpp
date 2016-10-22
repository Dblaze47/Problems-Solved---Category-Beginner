#include<iostream>
using namespace std;

int main(){
    string str;
    while(getline(cin, str)){
        int i, j, k, len;
        char temp;
        len = str.size();
        for(i = 0; i<len; ++i){
            for(j = i; str[j]!=' ' && j<len; ++j){k = j;}
            j--;
            for(; i<j; --j, ++i){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            i = (k+1);
        }
        for(i = 0; i<len; ++i){
            cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}
