#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int t;
scanf("%d",&t);
while(t--){
int a,b;
scanf("%d%d",&a,&b);
int godz=0;
int mechagodz=0;
int max,winner;
for(int i=0;i<a;i++)
{
scanf("%d",&max);
if(max > godz)
godz = max;
}
for(int j=0;j<b;j++){
scanf("%d",&max);
if(max > mechagodz)
mechagodz = max;
}
if(mechagodz > godz)
printf("MechaGodzilla\n");
else
printf("Godzilla\n");
}
return 0;
}
