#include<bits/stdc++.h>
using namespace std;
int main(){
int r,x1,x2,y1,y2;
cin>>r>>x1>>x2>>y1>>y2;
long double diameter;
long long dis = sqrt(pow(x1-y1,2)+pow(x2-y2,2));
diameter = (2*r) - dis; 
long double radius = diameter/2;
//equation of line m and c calculation
long double slope = (long double)(y2-x2)/(y1-x1);
long double intercept = slope*(-1 * x1) + x2;
long double a,b,c,t;
a = m*m + 1;
t = intercept - x2;
b = (2*x1 + 2*m*t)* -1;
c = x1*x1 + t1*t1 - radius * radius;
}
