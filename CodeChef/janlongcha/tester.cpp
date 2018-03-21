#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
string ii;
while(t--){
int sum0=0;
int sum1=0;

cin>>ii;
if(ii[0]!='i'){
for(int i=0;i<ii.size();i++)
{
if(ii[i]=='1')
sum0+=(i+1);
else if(ii[i]=='0')
sum1+=(i+1);
}
cout<<sum0<<"\t"<<sum1<<"\t"<<ii.size()<<"\n";}
else
cout<<ii<<"\n";
}
return 0;}
