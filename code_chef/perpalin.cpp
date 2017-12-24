#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
int n,p;
cin>>n>>p;
int x = n/p;
if(p ==1 || p == 2)
{cout<<"impossible\n";
}
else
{
string g = string(p-2,'b')+"a";
g = "a" + g;
for(int j=0;j<x;j++)
	cout<<g;
cout<<endl;
}
}
return 0;}
