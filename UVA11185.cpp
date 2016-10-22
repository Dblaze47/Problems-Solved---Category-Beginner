#include<iostream>
#include <cstdio>
using namespace std;

inline void rev(string& s, int n){int i, j; for(i = 0, j = n-1; i<j; i++, j--){swap(s[i],s[j]);} return;}

int main()
{
    long long n;
    while(cin >> n && n >= 0){
        string s = "";
        while(n){
            s += (n%3) + '0';
            n /= 3;
        }
        rev(s, s.size());
        if(s == "") cout << "0" <<endl;
        else cout << s <<endl;
    }

    return 0;
}
