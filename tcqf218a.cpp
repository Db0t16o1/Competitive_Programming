#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b,flag=0,candy=0;
cin>>a>>b;
int num[b];
for(int i=0;i<b;i++){
cin>>num[i];
if(i==0 && num[i]==1)
{candy++;flag =1;}
else if(num[i-1]+1 == num[i])
{candy++;
flag =1;}
else{
if(candy)
candy--;
}

}
if(flag ==0)
cout<<1<<endl;
else
cout<<candy<<endl; 
}return 0;
}
