#include<iostream>
using namespace std;
int main(){
int flag = 1;
while(true){
string s;
cin>>s;
if(s.size()==1 && s[0] == '0')
return 0;
if(s.size() == 1)
cout<<"1\n";
else
{
int count2=1,count1,count;
if((((s[0]-'0')*10 + s[1]-'0') < 27) && s[1]!='0')
count1 = 2;
else if((s[1] == '0') && ((s[0]-'0') >2))
{
cout<<"0\n";
continue;
}
else
count1 = 1;
count = count1;
for(int i=2;i<s.size();i++){
if(s[i] == '0' && (s[i-1]-'0' < 3)){
count1 = count2;
count = count1;
}
else if(s[i-1] != '1' && s[i-1]!='2'){
count2 = count1;
}
else if(((s[i-1] == '1') || ((s[i]-'0')<7)) && s[i]!='0'){
count=count1+count2;
count2 = count1;
count1 = count;}
else{
count2 = count1;}

if(s[i] == '0' && ((s[i-1]-'0')>2 || s[i-1]=='0'))
{cout<<"0\n";
flag = 0;
break;
}}
if(flag > 0)
cout<<count<<"\n";
flag = 1;
}
}
return 0;}
