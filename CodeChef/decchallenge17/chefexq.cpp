#include<iostream>
using namespace std;
int main(){
int n,q;
cin>>n>>q;
int a[n];
int xorr[n];
for(int i=0;i<n;i++){
cin>>a[i];
if(i>0)
xorr[i] = xorr[i-1]^a[i];
else
xorr[i] = a[i];
}
while(q--){
//for(int i=0;i<n; i++){
//cout<<"{ "<<a[i]<<", "<<xorr[i]<<"\n";
//}
int type;
cin>>type;
int x,y;
cin>>x>>y;
if(type==1)
{
if(x>1){
for(int i=x-1;i<n;i++){
xorr[i] = (xorr[i-1])^y;
}}
else
{
xorr[0] = y;
for(int i=x;i<n;i++){
xorr[i] = a[i] ^ xorr[i-1];
}

}
a[x-1]= y;
}else{
int count = 0;
for(int i=0;i<x;i++)
{if(xorr[i] == y)
count++;
}
cout<<count<<"\n";
}

}
return 0;
}
