#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        stack<char> eqn;
        queue<char> RPN;
        int i, len;
        len = str.size();
        for(i = 0; i<len; i++){
            if(str[i] == '('){eqn.push(str[i]);}
            else if(str[i] == ')'){
                while(eqn.top() != '('){RPN.push(eqn.top()); eqn.pop();}
                eqn.pop();
            }
            else if(str[i] == '+'){
                if(eqn.top() == '-' || eqn.top() == '*' || eqn.top() == '/' || eqn.top() == '^'){
                    RPN.push(eqn.top());
                    eqn.pop();
                }
                else {eqn.push(str[i]);}
            }
            else if(str[i] == '-'){
                if(eqn.top() == '+' || eqn.top() == '*' || eqn.top() == '/' || eqn.top() == '^'){
                    RPN.push(eqn.top());
                    eqn.pop();
                }
                else {eqn.push(str[i]);}
            }
            else if(str[i] == '*'){
                if(eqn.top() == '/' || eqn.top() == '^'){
                    RPN.push(eqn.top());
                    eqn.pop();
                }
                else {eqn.push(str[i]);}
            }
            else if(str[i] == '/'){
                if(eqn.top() == '*' || eqn.top() == '^'){
                    RPN.push(eqn.top());
                    eqn.pop();
                }
                else {eqn.push(str[i]);}
            }
            else if(str[i] == '^'){eqn.push(str[i]);}
            else if (str[i]>= 'a' && str[i] <= 'z'){RPN.push(str[i]);}
        }
        while(!RPN.empty()){
            cout<<RPN.front();
            RPN.pop();
        }
        cout<<endl;
    }
    return 0;
}
