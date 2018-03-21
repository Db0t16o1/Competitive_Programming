#include<iostream>
#include<cmath>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int l,d;long double t;
cin>>l>>d>>t;
//long double theta = acos((long double)d/l);
//long double difference = (2*M_PI)/3600 - theta;

//long long rot = (t * theta)/(2*M_PI);
long double cosx = (long double)d/l;
int size = log2(t);
long double ar[size];
ar[0] = d;
for(int i=1;i<size;i++){
ar[i] = 2*pow(ar[0],2) - 1;
}
if(t<=3){

}
}
return 0;
}
