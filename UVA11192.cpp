#include<iostream>
using namespace std;

int main(){
    int x, i, len, lene, j, temp, mo;
    string str;
    while(cin>>x && x!= 0){
        cin>>str;
        len = str.size();
        lene = len/x;
        for(i= 0; i<=len-lene; i++){
            mo = (i+lene)-1;
            for(j=mo; i<j; i++, j--){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            i = mo;
        }
        cout<<str<<endl;
    }
    return 0;
}
