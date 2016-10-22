#include<iostream>
#include<algorithm>
#include<queue>
#include<cstdio>
using namespace std;

int main(){
    int N;
    while(scanf("%d", &N) && N!= 0){
        int i = 0, x, total = 0, cost = 0;
        priority_queue<int, vector<int>, greater<int> > S; // Including greater <int> means the queue will be sorted with the min at the top.
        while(i<N){
            scanf("%d", &x);
            S.push(x);
            i++;
        }
        if(N == 1){cost = S.top();}
        else{
            while(S.size()>1){
                total = S.top(); // Top element is new total;
                S.pop();
                total += S.top();
                S.pop(); // Popping after adding every two elements.
                cost += total;
                S.push(total); //The minimum value is at the top now, as heap is sorted ascending.
            }
        }
        printf("%d\n", cost);
    }
     return 0;
}
