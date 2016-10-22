#include<iostream>
using namespace std;

int main(){
    int i, t;
    cin>>t;
    cin.ignore();
    while(t--){
        int arr[26], mx = -1;
        char ch;
        for(i = 0; i<26; i++){
            arr[i] = 0;
        }
        string str;
        getline(cin, str);
        for(i = 0; i<str.size(); i++){
            if(str[i]>='A' && str[i]<='Z'){str[i] += 32;}
        }
        for(i = 0; i<str.size(); i++){
            arr[str[i]-'a']++;
        }
        for(i = 0; i<26; i++){
            if(mx<arr[i]){mx = arr[i];}
        }
        for(i = 0; i<26; i++){
            if(arr[i] == mx){ch = i + 'a'; cout<<ch;}
        }
        cout<<endl;
    }


    return 0;
}
