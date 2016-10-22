#include<iostream>
#include<stack>
using namespace std;

class Stack{
    char s[150];
    int top;
    int s_size;
public:
    Stack(): top(0), s_size(150){}
    bool IsEmpty(){
        return (top == 0 && s[top] == '\0');
    }
    void Push(char x){
        if(top >= s_size)
        {
        }
        else
        {
            s[top++] = x;
        }
    }
    void Pop(){
        if(IsEmpty()){
        }
        else{
            s[--top] = '\0';
        }
    }

    char Top(){
        if(IsEmpty()){
            return '\0';
        }
        return s[top-1];
    }
};

int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string str;
        Stack ex;
        getline(cin, str);
        if(str.size() == 0){cout<<"Yes"<<endl;}
        else{
            int i, len = str.size();
            for(i = 0; i<len; ++i){
                if(str[i]=='[' || str[i]== '{' || str[i]=='('){
                    ex.Push(str[i]);
                }
                else if(str[i]==']'){
                    if(ex.IsEmpty()){break;}
                    else if(ex.Top() == '['){ex.Pop();}
                    else{break;}
                }
                else if(str[i]==')'){
                    if(ex.IsEmpty()){break;}
                    else if(ex.Top() == '('){ex.Pop();}
                    else{break;}
                }
                else if(str[i]=='}'){
                    if(ex.IsEmpty()){break;}
                    else if(ex.Top() == '{'){ex.Pop();}
                    else{break;}
                }
            }
            if(i == len && ex.IsEmpty()){cout<<"Yes"<<endl;}
            else{cout<<"No"<<endl;}
        }
    }
    return 0;
}
