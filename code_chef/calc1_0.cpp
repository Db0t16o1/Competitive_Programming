#include<iostream>
#include<cmath>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int x1,x2,n,b;
cin>>n>>b;
x1 = n/(b*2);
x2 = x1+1;
long long int maximum;
maximum = max((n-x1*b)*x1, (n-x2*b)*x2);
cout<<maximum<<"\n";
}
return 0;
}
