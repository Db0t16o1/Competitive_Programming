#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;long d;
cin>>n>>d;
long a[n];
int nn = n;
while(nn>0){
nn--;
cin>>a[nn];
}
int start=0,end = 0;
int minlen = n+1;
long currsum = 0;
while(end<n){
if (a[0] >= d){
minlen = 1;
break;
}
while(currsum < d && end < n)
currsum += a[end++];
while((currsum >= d) && (start<n)){
if(end-start< minlen)
minlen = end-start;
currsum -= a[start++];
}
}
cout<<minlen<<"\n";}
return 0;}
