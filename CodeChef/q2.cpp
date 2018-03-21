#include<bits/stdc++.h>
using namespace std;
int main(){
int m = 1000000007;
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int ar[n];
unsigned long long cost=0;
for(int i=0;i<n;i++){
cin>>ar[i];
}
if(n==1)
cout<<ar[0]<<"\n";
else{
sort(ar,ar+n);
long long sum = ar[0]+ar[1];
cost=sum;
for(int i=2;i<n;i++){
sum = (sum) + (ar[i]);
cost = (cost + (sum));
if(cost >= m)
cost = cost%m;

}
cout<<cost<<"\n";
}}
return 0;
}
