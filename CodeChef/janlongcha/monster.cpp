#include<iostream>
using namespace std;
int brahma = 262143;

int for_bin_int(string& str){
int power;int number=0,size = str.size();
for(string::iterator it=str.begin();it!=str.end();it++)
{
if(it == str.begin())
power = pow(2,size-1);
else
power = power>>1;
if(*it == '1')
number += power;
}
return number;
}

string int_for_binary(int num){
string s="";
while(num>0){
int rem = num%2;
if(rem)
s = "1"+s;
else
s = "0"+s;
num/=2;
}
return s;
}

void set_creator(set < string > *a,int n ){
a[0].insert("0");
a[1].insert("0");
a[1].insert("1");
a[2].insert("00");
a[2].insert("10");
for(int i=3;i<n;i++){

}
}

int main(){
int n;
cin>>n;
int ar[n];
set < string > aset[n]; 
set_creator(aset,n);
int count = n;
for(int i=0;i<n;i++){
cin>>ar[i];
}
int q;
cin>>q;
while(q--){
int x,y;
cin>>x>>y;
if(!x)
x = x & brahma;
for(set::iterator i=aset[x].begin();i<=x;i++){
if(((i & x) == i) && (ar[i]>0)){
ar[i]-=y;
if(ar[i]<=0)
count--;
}
}
cout<<count<<"\n";
}

return 0;
}
