#include<bits/stdc++.h>

using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int  n,k,b;
cin>>n>>k>>b;
long long int arr[n],ans[n];
for(int i=0;i<n;i++){
cin>>arr[i];
ans[i] = 1;
}
sort(arr,arr+n);
long long int max=0;
for(int i=n-2;i>=0;i--){
auto ind = lower_bound(arr+i+1,arr+n,arr[i]*k + b);
if(ind == arr+n)
ans[i] = 1;
else
ans[i] = ans[ind-arr] + 1; 
if(max<ans[i])
max = ans[i];
}
if(n==1)
max = 1;
cout<<max<<endl;
}
return 0;
}
