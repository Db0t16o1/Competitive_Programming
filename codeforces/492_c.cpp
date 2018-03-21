#include<bits/stdc++.h>
struct sol{
int b; long long int a;
};
using namespace std;
bool foo(sol a, sol b){
return a.b < b.b;
}
int main(){
int n,r,avg;
cin>>n>>r>>avg;
long long int avgtemp=0;
sol var[n];
for(int i=0;i<n;i++){
int temp;
cin>>temp;
avgtemp+=temp;
var[i].a = r-temp;
cin>>var[i].b;
}
//avgtemp/=n;
sort(var,var+n,foo);
long long int ans=0;
int i=0;
long long int comp =(long long int) avg * n;
avgtemp = comp - avgtemp;

while(avgtemp > 0){
if(var[i].a > 0){
long int x = min(avgtemp, var[i].a);
var[i].a-=x;
ans+=(long long int)var[i].b * x;
avgtemp -= x;
}
i++;

if(i==n)
break;
}
cout<<ans;
return 0;
}
