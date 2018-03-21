#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int ar[n];
int maxv =0;
for(int i=0;i<n;i++){
cin>>ar[i];
if(i==0)
maxv = ar[i];
else
maxv = max(maxv,ar[i]);
}int c,d,s;
cin>>c>>d>>s;
long double ans;
ans = (long double)maxv*(c-1);
printf("%Lf\n",ans);
}
return 0;
}
