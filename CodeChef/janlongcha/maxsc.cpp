#include<bits/stdc++.h>
using namespace std;

int max_less_than_input(int* a, int n, int x){
int i=n;
while(i--){
if(a[i]<x)
return a[i];
}
return 0;
}

int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int* ar[n];
for(int i=0;i<n;i++){
ar[i] = (int*)malloc(n*sizeof(int));
for(int j=0;j<n;j++)
cin>>ar[i][j];
sort(ar[i],ar[i]+n);
}

long sum=0;
int addenum = ar[n-1][n-1];
sum+=ar[n-1][n-1];
for(int i=n-2;i>-1;i--){
addenum = max_less_than_input(ar[i],n,addenum);
if(addenum){
sum+=addenum;}
else
{sum=-1;break;}}
cout<<sum<<"\n";
}
return 0;}
