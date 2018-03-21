#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int fc=0,fh=0,fe=0,ff=0,count=0;
for(int i=0;i<s.length();i++){
if(s[i]=='c')
fc++;
else if(s[i]=='h')
fh++;
else if(s[i]=='e')
fe++;
else if(s[i]=='f')
ff++;
if(i>3){
if(s[i-4]=='c')
fc--;
else if(s[i-4]=='h')
fh--;
else if(s[i-4]=='e')
fe--;
else if(s[i-4]=='f')
ff--;
}

if(fc && fh && fe && ff)
count++;

}
if(count > 0)
cout<<"lovely "<<count<<"\n";
else
cout<<"normal\n";
}
return 0;
}
