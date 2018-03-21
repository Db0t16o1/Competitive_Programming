#include<iostream>
#include<string>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int x;
cin>>x;
if(x == 0)
cout<<"Draw"<<"\n";
else if(x==1){
string aa;
cin>>aa;
cout<<aa<<"\n";}
else
{
int score=1;
string aa,bb;
cin>>aa;
x--;
while(x--){
string temp;
cin>>temp;
if(temp == aa)
score +=1;
else
{
bb = temp;
score-=1;
}
}
if(score > 0)
cout<<aa<<"\n";
else if(score < 0)
cout<<bb<<"\n";
else
cout<<"Draw"<<"\n";
}}
return 0;}
