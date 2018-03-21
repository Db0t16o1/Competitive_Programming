#include<iostream>
#include<string>
using namespace std;

int f(unsigned long long a,unsigned long long n){
int ans;
if(n==1)
return a%9;
else if (n & 1)
{
ans = (f(a,n-1)%9)*(a%9)%9;
}
else{
int c = f(a,n/2);
ans = (c*c)%9;
}
return ans;
}


int main(){
int t;
cin>>t;
while(t--){
unsigned long long a,n;
cin>>a>>n;

int fn1 = f(a%9,n);
if(fn1 ==0)
fn1 = 9;

cout<<fn1<<"\n";
}
return 0;
}
