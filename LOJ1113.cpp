#include<iostream>
#include<stack>
using namespace std;

int main(){
    int i, T;
    string s;
    cin>>T;
    for(i = 1; i<=T; i++){
        cout<<"Case "<<i<<":"<<endl;
        string str;
        stack<string> bk, fwd;
        bk.push("http://www.lightoj.com/");
        cin>>s;

        while(s!="QUIT"){
            if(s == "VISIT"){
                cin>>str;
                bk.push(str);
                while(!fwd.empty()){fwd.pop();}
                cout<<bk.top()<<endl;
            }
            else if(s == "BACK"){
                if(bk.size() == 1){cout<<"Ignored"<<endl;}
                else{
                    fwd.push(bk.top());
                    bk.pop();
                    cout<<bk.top()<<endl;
                }
            }
            else if(s == "FORWARD"){
                if(fwd.size() == 0){cout<<"Ignored"<<endl;}
                else{
                    bk.push(fwd.top());
                    fwd.pop();
                    cout<<bk.top()<<endl;
                }
            }
            cin>>s;
        }
    }
    return 0;
}
