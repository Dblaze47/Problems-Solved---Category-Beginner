#include<iostream>
using namespace std;

int main(){
    int n, N, i, j, r, c;
    while(cin>>n && n!=0){
        int sm = 0, cnr = 0, cnc = 0;
        const int sz = n;
        const int rsz = n;
        const int csz = n;
        int mat[sz][sz], row[rsz], col[csz];
        for(i = 0; i<n; i++){
            for(j = 0; j<n; j++){
                cin>>mat[i][j];
            }
        }
         for(i = 0; i<n; i++){
            for(j = 0; j<n; j++){
                sm += mat[i][j];
            }
            row[i] = sm;
            sm = 0;
        }
        sm = 0;
        for(i = 0; i<n; i++){
            for(j = 0; j<n; j++){
                sm += mat[j][i];
            }
            col[i] = sm;
            sm = 0;
        }
        for(i = 0; i<n; i++){
            if(row[i]%2 == 1){cnr++; r = i;}
            if(col[i]%2 == 1){cnc++; c = i;}
        }
        if(cnr == 0 && cnc == 0){cout<<"OK"<<endl;}
        else if(cnr == 1 && cnc == 1){cout<<"Change bit ("<<r+1<<","<<c+1<<")"<<endl;}
        else {cout<<"Corrupt"<<endl;}
    }
    return 0;
}
