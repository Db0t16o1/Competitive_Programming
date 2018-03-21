#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,m,x,k;
string s;
cin>>n>>m>>x>>k>>s;
int omwork=0,emwork=0;
for(int i=0;i<s.length();i++){
if(s[i]=='E' || s[i]=='e')
emwork+=1;
else
omwork+=1;
}
int odd_m,even_m;
if(m & 1)
odd_m = m/2 + 1;
else
odd_m = m/2;
even_m = m - odd_m;
omwork = min(omwork, odd_m*x);
emwork = min(emwork, even_m*x); 
if(x * m < n)
cout<<"no\n";
else if(omwork+emwork < n)
cout<<"no\n";
else
cout<<"yes\n";
}return 0;
}
