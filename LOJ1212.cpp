#include<iostream>
#include<cstdio>
#include<deque>
using namespace std;
#define sf scanf
#define pf printf

int main (){

    int T, i;
    sf("%d", &T);
    for (i = 1; i<=T; ++i){
        int sz, cmm;
        deque<int> str;
        string s;
        int x;
        sf("%d%d", &sz, &cmm);
        pf("Case %d:\n", i);
        cin.ignore();
        for (int j = 0; j<cmm; ++j){
            cin>>s;
            if(s == "pushLeft"){
                cin>>x;
                if(str.size() < sz){
                    str.push_front(x);
                    pf("Pushed in left: %d\n", x);
                }
                else pf("The queue is full\n");
            }
            else if(s == "pushRight"){
                cin>>x;
                if(str.size() < sz){
                    str.push_back(x);
                    pf("Pushed in right: %d\n", x);
                }
                else pf("The queue is full\n");
            }
            else if (s == "popLeft"){
                if(str.size() != 0){
                    pf("Popped from left: %d\n", str.front());
                    str.pop_front();
                }
                else pf("The queue is empty\n");
            }
            else if (s == "popRight"){
                if(str.size() != 0){
                    pf("Popped from right: %d\n", str.back());
                    str.pop_back();
                }
                else pf("The queue is empty\n");
            }
        }
    }
    return 0;
}
