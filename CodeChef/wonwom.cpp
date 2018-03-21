#include<bits/stdc++.h>
using namespace std;
struct tlp{
long x;
long y;
};
bool cmp(tlp a, tlp b){
if((a.y - b.y)<10000)
return (a.x<b.x);
return (a.y >  b.y);
}
int main(){
int t;
cin>>t;
long z = 0;
tlp a[t];
while(z<t){
cin>>a[z].x;
a[z].y = a[z].x;
while(a[z].y < 1000000)
a[z].y = a[z].y * 10;
z++;
}
sort(a,a+t,cmp);
for(long h=0;h<t;h++){
cout<<a[h].x;
}
return 0;
}
