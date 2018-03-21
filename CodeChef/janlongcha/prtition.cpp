#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;

while(t--){
int x,n;
cin>>x>>n;
int ar[n],val=1;
ar[x-1] = 2;
int i = 1;
if((x & 1) && ((n & 1) && (!(((n-1)/2) & 1))))
{
for(i=1;(i<x && (n-i+1>x));i++)
{ar[i-1] = (val+1)%2;
ar[n-i] = (val+1)%2;
val++;
if(val==10)
val = 0;
}
if(i==x){
for(int j=i+1;j<=i+1+(n-i-i-1)/2;j++){
ar[j-1] = (val+1)%2;
ar[n-j+1] = (val+1)%2;
val++;
if(val==10)
val = 0;
}
}
else{
for(int j=i;j<=i+((n-i-i-1)/2);j++){
ar[j-1] = (val+1)%2;
ar[n-j-1] = (val+1)%2;
val++;
if(val==10)
val = 0;
}
}
for(int ii=0;ii<n;ii++)
cout<<ar[ii];}
else if(!(x & 1) && ((!(n & 1)) && (!((n-4)/2 & 1)))){

if(x!=2)
{
ar[0]=ar[1]=0;
ar[2]=1;
int ii,jj,k;
ii=jj=x;
while((ii>4) && (jj<n)){
ii--;
jj++;
ar[ii-1]=(val+1)%2;
ar[jj-1]=(val+1)%2;
val++;
if(val==10)
val =0;
}
if(jj==n){

for(k=4;k<(ii+4)/2;k++){
ar[k-1]=(val+1)%2;
ar[ii-2-k+4]=(val+1)%2;
val++;
if(val == 10)
val = 0;
}}
else{
//running good
for(k=jj+1;k<=(jj+n)/2;k++){
ar[k-1]=(val+1)%2;
ar[n+jj-k]=(val+1)%2;
val++;
if(val == 10)
val = 0;
}
}
}
else 
{
ar[0]=ar[2]=0;
ar[3]=1;
for(int k=5;k<(5+n+1)/2;k++)
{ar[k-1] = (val+1)%2;
ar[n-k+4] = (val+1)%2;
val++;
if(val == 10)
val =0;
}}
for(int qw=0;qw<n;qw++)
cout<<ar[qw];}
//odd n and even sum

else if (!((((n*(n+1))/2)-x) & 1) && (n>4)){
long long lambda = (((n*(n+1))/2)-x)/2;
for(int i=0;i<n;i++)
{if(i!=x-1)
ar[i] = 0;}
int curr1=0,curr2=0,curr3=0;
long long curr_sum=0;

for(int i=1;i<n+1;i++){
if(i!=x){
curr_sum+=i;
if(curr2>0)
ar[curr2-1] = 1;
curr3 =curr2;
curr2 = curr1;

curr1 = i;
if(curr_sum==lambda){
ar[curr1-1]=ar[curr2-1]=1;
break;}
else if(curr_sum>lambda){
long long beta = curr_sum - lambda;
if(ar[beta-1] == 1 && beta<curr2){

ar[curr1-1]=1;
ar[curr2-1] = 1;
ar[beta-1] = 0;
break;
}
else if(beta == curr2){
ar[curr1-1] = 1;
break;
}
else{
if(beta > curr2 || ar[beta-1] != 1){

curr_sum-=curr2;
curr_sum-=curr1;
ar[curr2-1]=0;
curr2=curr3;
curr1=curr2;
i-=1;
}
}
}
}}
//if(summation(n,x,ar)){
for(int qw=0;qw<n;qw++)
cout<<ar[qw];//}
//else
//cout<<"impossible";

}


//even n and odd sum

else 
cout<<"impossible";
cout<<"\n";
}
return 0;
}
