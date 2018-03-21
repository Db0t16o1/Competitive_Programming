#include<iostream>
#include<cstdio>
using namespace std;
long hcf(long a, long b){
long gcd;
if(a == b){
return a;
}
gcd = hcf(max(a,b)-min(a,b), min(a,b));
return gcd;
}
int main(){
int t;
scanf("%d",&t);
while(t--){
long a,b;
scanf("%ld%ld",&a,&b);
long gcd = hcf(a,b);
a/=gcd;
b/=gcd;
printf("%ld %ld\n",b,a);
}
return 0;
}
