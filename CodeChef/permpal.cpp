#include<iostream>
#include<vector>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int index_odd;
int len = s.length();
vector<int> *ar = new vector <int> [26];
int ans[len];
for(int i=0;i<len;i++)
ar[s[i]-'a'].push_back(i+1);
int flag=0;
for(int i=1;i<27;i++){
if(ar[i-1].size() & 1){
flag++;
index_odd = i-1;
}
}
if(flag>1)
cout<<-1<<"\n";
else if (flag == 1)
{
ans[len/2] = ar[index_odd].back();
ar[index_odd].pop_back();
int front=0;
int back=len-1;
for(int i=0;i<26;i++){
while(!ar[i].empty())
{
ans[front++] = ar[i].back();
ar[i].pop_back();
ans[back--] = ar[i].back();
ar[i].pop_back();

}}
for(int i=0;i<len;i++)
cout<<ans[i]<<" ";
cout<<"\n";
}
else {
int front=0;
int back=len-1;

for(int i=0;i<26;i++){
while(!ar[i].empty())
{
//cout<<i<<"\n";
ans[front++] = ar[i].back();
ar[i].pop_back();
ans[back--] = ar[i].back();
ar[i].pop_back();
}}
for(int i=0;i<len;i++)
cout<<ans[i]<<" ";
cout<<"\n";
}
}
return 0;}
