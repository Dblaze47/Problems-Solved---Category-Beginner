#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {
    int T;
    cin>>T;
    cin.ignore();
    int i;
    for(i = 1; i<=T; ++i){
        int press = 0, x, len = 0, j;
        char ch;
        string line;
        getline(cin, line);
        len = line.size();
        for(j = 0; j<len; ++j){
            ch = line[j];
            if(ch == 'a' || ch == 'b' || ch == 'c'){x = 2;}
            else if(ch == 'd' || ch == 'e' || ch == 'f'){x = 3;}
            else if(ch == 'g' || ch == 'h' || ch == 'i'){x = 4;}
            else if(ch == 'j' || ch == 'k' || ch == 'l'){x = 5;}
            else if(ch == 'm' || ch == 'n' || ch == 'o'){x = 6;}
            else if(ch == 'p' || ch == 'q' || ch == 'r' || ch == 's'){x = 7;}
            else if(ch == 't' || ch == 'u' || ch == 'v'){x = 8;}
            else if(ch == 'w' || ch == 'x' || ch == 'y' || ch == 'z'){x = 9;}
            else if(ch == ' '){x = 0;}

            switch(x){
                case 2: {
                    if(ch == 'a'){press++;}
                    else if(ch == 'b'){press += 2;}
                    else if(ch == 'c'){press += 3;}
                    break;}
                case 3: {
                    if(ch == 'd'){press++;}
                    else if(ch == 'e'){press += 2;}
                    else if(ch == 'f'){press += 3;}
                    break;}
                case 4:{
                    if(ch == 'g'){press++;}
                    else if(ch == 'h'){press += 2;}
                    else if(ch == 'i'){press += 3;}
                    break;}
                case 5:{
                    if(ch == 'j'){press++;}
                    else if(ch == 'k'){press += 2;}
                    else if(ch == 'l'){press += 3;}
                    break;}
                case 6:{
                    if(ch == 'm'){press++;}
                    else if(ch == 'n'){press += 2;}
                    else if(ch == 'o'){press += 3;}
                    break;}
                case 7:{
                    if(ch == 'p'){press++;}
                    else if(ch == 'q'){press += 2;}
                    else if(ch == 'r'){press += 3;}
                    else if(ch == 's'){press += 4;}
                    break;}
                case 8:{
                    if(ch == 't'){press++;}
                    else if(ch == 'u'){press += 2;}
                    else if(ch == 'v'){press += 3;}
                    break;}
                case 9:{
                    if(ch == 'w'){press++;}
                    else if(ch == 'x'){press += 2;}
                    else if(ch == 'y'){press += 3;}
                    else if(ch == 'z'){press += 4;}
                    break;}
                case 0: {press++; break;}
            }
        }
        cout<<"Case #"<<i<<": "<<press<<endl;
    }
    return 0;
}
