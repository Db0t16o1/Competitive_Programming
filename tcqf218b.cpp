#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int x,y,one[11],two[11],cone=0,ctwo=0;
cin>>x>>y;
for(int i=0;i<11;i++){
cin>>one[i];
if(one[i] & 1)
cone++;
}
for(int i=0;i<11;i++){
cin>>two[i];
if(two[i] & 1)
ctwo++;
}
if(x > y){
if(cone>=ctwo)
cout<<"alan\n";
else
cout<<"chef\n";
}
else{
if(ctwo>=cone)
cout<<"alan\n";
else 
cout<<"chef\n";
}}
return 0;}
