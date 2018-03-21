#include<bits/stdc++.h>
using namespace std;
void kingdom2( string& s, int index,int& a);
void kingdom1( string& s,int index, int& a){
int r= 1;
int u = 0;
int i = index+1; 
//cout<<"wallah";
while(r>=u && i<s.length()){

if(s[i] =='U')
u++;
else
r++;
i++;

}
if(u>r){
a++;
kingdom2(s,i,a);
}
}
void kingdom2( string& s, int index, int& a){
int r= 0;
int u = 1;
int i = index+1; 
//cout<<s[i]<<l;
while(u>=r && i<s.length()){
//cout<<s[i]<<endl;
if(s[i] =='U')
u++;
else
r++;
i++;

}
//cout<<u<<r;
if(r>u){
a++;
//cout<<a;
kingdom1(s,i,a);
}
}

int main(){
int n;
cin>>n;
int ans =0;
string s;
cin>>s;
if(s[0] == 'R')
kingdom1(s,0,ans);
else 
kingdom2(s,0,ans);
cout<<ans;
return 0;}
