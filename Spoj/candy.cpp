#include<bits/stdc++.h>
using namespace std;
int main(){
while(true){
int n;
cin>>n;
if(n!= -1){
int ar[n];
int sum=0,ans=0;
for(int i=0;i<n;i++){
cin>>ar[i];
sum+=ar[i];
}
if(ceil((double)sum/n) == (sum/n)){
int thresh = sum/n;
for(int i=0;i<n;i++){
if(ar[i] > thresh)
ans+=(ar[i] - thresh);
}
cout<<ans<<endl;
}
else cout<<"-1"<<endl;
}
else break;
}
return 0;
}
