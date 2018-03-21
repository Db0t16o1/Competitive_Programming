#include<iostream>
using namespace std;
int summation(int*a){
long long sum1=0,sum0=0;
for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++){
if(a[i]==1){
sum1+=a[i];
if(sum1 > 1000000007)
sum1%=1000000007;}
else if(a[i]==0){
sum0+=a[i];
if(sum0 > 1000000007)
sum0%=1000000007;}
}
if(sum0 == sum1)
return 1;
else
return 0;
}
int main(){
int t;
cin>>t;

while(t--){
int x,n;
cin>>x>>n;
int ar[n],val=1;
ar[x-1] = 2;
int i = 1;
if (!((((n*(n+1))/2)-x) & 1)){
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
if(summation(ar)){
for(int qw=0;qw<n;qw++)
cout<<ar[qw];}
else
cout<<"impossible";

}

//even n and odd sum

else 
cout<<"impossible";
cout<<"\n";
}
return 0;
}
