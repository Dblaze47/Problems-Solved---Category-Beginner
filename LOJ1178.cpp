#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdio>
using namespace std;
#define read(_x) scanf("%d", &_x)
const double EPS = 1e-7;

void solve(){

    int T;
    cin>>T;
    double a, b, c, d, area;
    for (int i = 1; i<=T; i++){
        cin>>a>>b>>c>>d;
        if (a<c) swap(a,c);

        area = ((a+c) * sqrt((a+b-c+d)*(a-b-c+d)*(a+b-c-d)*(-a+b+c+d)))/(4*(a-c));
        printf("Case %d: %f\n", i, abs(area)+EPS);
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
