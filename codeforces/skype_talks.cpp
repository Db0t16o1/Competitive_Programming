#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
long id[n];
for(int i=0;i<n;i++)
cin>>id[i];
sort(id,id+n);
int pair=0;
for(int i=0;i<n-2;i++){
while(id[i+1]==0)
i++;
if(id[i]==id[i+1])
pair++;
if((id[i]==id[i+1]) && (id[i+1] == id[i+2]))
{
pair = -1;
break;
}
}
if(pair>=0 && id[n-2]==id[n-1] && id[n-2])
pair++;
cout<<pair;
return 0;}
