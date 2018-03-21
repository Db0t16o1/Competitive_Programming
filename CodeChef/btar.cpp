#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
long long a1=0,a2=0,a3=0;
while(n--){
long x;
cin>>x;
x = x%4;
if(x==1)
a1+=1;
else if(x==2)
a2+=1;
else if(x == 3)
a3 += 1;
}
long count=0;
long q = a2/2;
count += q;
//a2 = a2 - (2*q);
if((a2%2)!=0){
long y = min(a1,a3);
long z = max(a1,a3);
count+=y;
z-=y;

if(z%4 != 2)
count = -1;
else{
long k = z-2;
int r = k/4;
count+=(r*3);
count+=2;
}
}
else{
long y= min(a1,a3);
long z = max(a1,a3);
count+=y;
z-=y;
if((z%4)!=0)
count = -1;
else
{
int k = z/4;
count +=(k*3);

}

}
cout<<count<<"\n";
}
return 0;
} 
