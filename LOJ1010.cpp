#include<iostream>
#include <cmath>
#include <cstdio>
using namespace std;
#define pf printf
#define sf scanf
#define read(x_) scanf("%d", &x_)
typedef long long LL;
typedef unsigned long long ULL;

void solve_1(){
    int T;
    int mxknt, m, n, low, high, kn;
    read(T);
    for(int a = 1; a<=T; ++a){
        mxknt = m = n = low = high = kn = 0;
        sf("%d%d", &m, &n);
        if (m == 1 || n == 1){mxknt = m * n;}
        else if (m > 2 && n > 2){
            int total = m * n;
            if(total%2 == 0){mxknt = total/2;}
            else {mxknt = (total/2);
                  ++mxknt;
            }
        }
        else if (m == 2 && n >= 2){
            int board[m][n], i , j;
            for(i = 0; i<m; ++i){
                for(j = 0; j<n; ++j){
                    board[i][j] = 0;
                }
            }
            board[0][0] = 5;
            board[0][1] = 5;
            board[1][0] = 5;
            board[1][1] = 5;
            i = 0;
            for(j = 4; j<n; j+=4){
                if(board[i][j] == 0){
                    board[i][j] = 5;
                    board[i+1][j] = 5;
                    if((j+1)<n){
                        board[i][j+1] = 5;
                        board[i+1][j+1] = 5;
                    }
                }
            }
            for(i = 0; i<m; ++i){
                for(j = 0; j<n; ++j){
                    if(board[i][j] == 5){
                        mxknt++;
                    }
                }
            }
        }
        else if (m >= 2 && n == 2){
            int board[m][n], i , j;
            for(i = 0; i<m; ++i){
                for(j = 0; j<n; ++j){
                    board[i][j] = 0;
                }
            }
            board[0][0] = 5;
            board[0][1] = 5;
            board[1][0] = 5;
            board[1][1] = 5;
            j = 0;
            for(i = 4; i<m; i+=4){
                if(board[i][j] == 0){
                    board[i][j] = 5;
                    board[i][j+1] = 5;
                    if((i+1) < m){
                        board[i+1][j] = 5;
                        board[i+1][j+1] = 5;
                    }
                }
            }
            for(i = 0; i<m; ++i){
                for(j = 0; j<n; ++j){
                    if(board[i][j] == 5){
                        mxknt++;
                    }
                }
            }
        }
    pf("Case %d: %d\n", a, mxknt);
    }
}

int main (){
    solve_1();
    return 0;
}
