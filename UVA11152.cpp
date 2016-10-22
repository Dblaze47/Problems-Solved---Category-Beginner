#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
#define pf printf
#define sf scanf
typedef long long LL;
typedef unsigned long long ULL;
const double pi = 2 * acos(0.0);

double triA(double a, double b, double c){
    double s,area;
    s = (a+b+c)/2;
    area = sqrt(s * (s-a) * (s-b) * (s-c));
    return area;
}
double outCircRad(double a,double b,double c){
    double area, s;
    s = (a+b+c)/2;
    area = (a*b*c)/(4*sqrt(s*(s-a)*(s-b)*(s-c)));
    return area;
}
double inCircRad(double a, double b, double c){
    double s, radius;
    s = (a+b+c)/2;
    radius = sqrt(((s-a)*(s-b)*(s-c))/s);
    return radius;
}
double circA(double r){
    double area;
    area = pi * r * r;
    return area;
}

int main() {
    double a,b,c;
    while(sf("%lf%lf%lf", &a,&b,&c) == 3){
        double sunflower,violet,roses, tArea, BCarea, SCarea, radii1, radii2;
        tArea = triA(a, b, c);

        radii1 = outCircRad(a, b, c);
        BCarea = circA(radii1);

        radii2 = inCircRad(a, b, c);
        SCarea = circA(radii2);

        sunflower = BCarea - tArea;
        violet = tArea - SCarea;
        roses = SCarea;

        pf("%.4lf %.4lf %.4lf\n", sunflower, violet, roses);
    }
    return 0;
}
