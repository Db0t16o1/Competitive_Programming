#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int ar[n];
int pos[n];
set <int > s;
for(int i=0;i<n;i++){
cin>>ar[i];
pos[i] = 1;
}
int mid = ceil(n/2);
sort(ar,ar+n);
int count=0;
for(int i=0;i<mid;i++){
int j;
j = (int)(lower_bound(ar+mid,ar+n,2*ar[i])-ar);
j = (int)(lower_bound(pos+j,pos+n,1)-pos);
while(j < n && pos[j]!=1)
j++;
if(j<n){
pos[j] = 0;
s.insert(j);
pos[i] = 0;



}}
for(int i=0;i<n;i++)
if(pos[i]==1)
count++;
int ans = n-count;
ans/=2;
ans+=count;

cout<<ans;
return 0;
}
