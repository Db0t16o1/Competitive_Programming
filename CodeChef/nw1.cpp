#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
int num;
cin>>num>>s;
num = num-28;
int n[7];
int k;
for(int i=0;i<7;i++)
n[i] = 4;
//int k;
if(s=="mon")
k = 0;
else if(s=="tues")
k=1;
else if(s[0]=='w')
k=2;
else if (s=="thurs")
k=3;
else if(s=="fri")
k=4;
else if(s=="sat")
k=5;
else
k=6;
while(num--){
n[k%7]+=1;
k++;
}
for(int i=0;i<7;i++)
cout<<n[i]<<" ";
cout<<"\n";
}
return 0;}
