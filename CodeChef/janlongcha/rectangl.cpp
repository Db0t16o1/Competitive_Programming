#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long a,b,c,d;
cin>>a>>b>>c>>d;
if(a==b && c==d){
cout<<"YES\n";
}
else if((a*a + b*b) == (c*c + d*d))
cout<<"YES\n";
else
cout<<"NO\n";
}
return 0;
}
