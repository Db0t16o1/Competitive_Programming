#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int refree(int* x,int* y,int*n,int* diff){
int a=0,b=0;
for(int i=0;i<5;i++)
{
a+=x[i];
if(a>(b+5-i)){
*n = 2*(i)+1;
return 1;
}
if(b>(a+5-i-1)){
*n = 2*(i)+1;
return -1;
}
b+=y[i];
if(b>(a+5-i-1))
{
*n = 2*(i+1);
return -1;
}
if(a>(b+5-i-1)){
*n = 2*(i+1);
return 1;
}
}
for(int i=0;i<5;i++)
{if(diff[5+i] == 1)
{*n = (5+i+1)*2;
return 1;
}
if(diff[5+i] == -1){
*n = 12 + 2*i;
return -1;
}}
return 0;
}


int main(){
string s;

while(getline(cin,s) && s.length()){
int t1[10],t2[10];
for(int i=0;i<20;i++){
if(i%2 == 0)
t1[i/2] = s[i]-'0';
else
t2[(i-1)/2] = s[i]-'0';
}
int d[10];int* shoots,sho;
shoots = &sho;
sho = 0;
for(int i=0;i<10;i++)
d[i] = t1[i] - t2[i];
int result = refree(t1,t2,shoots,d);
if(result == 1)
cout<<"TEAM-A "<<*shoots<<"\n";
else if(result == -1)
cout<<"TEAM-B "<<*shoots<<"\n";
else
cout<<"TIE\n";
}
return 0;
}
