#include<bits/stdc++.h>
using namespace std;
bool foo(int a,int b){
return a>b;
}
int main(){
int n,m;
cin>>n>>m;
int obli[n];
int table[m];
for(int i=0;i<n;i++)
cin>>obli[i];
for(int i=0;i<m;i++)
cin>>table[i];
sort(obli,obli+n,foo);
sort(table, table+m,foo);
int i=0,j=0;
int count = 0;
while(i<n && j<m){
if(obli[i]<=table[j]){
i++;
j++;
count++;
}
else
i++;
}
cout<<n-count;
return 0;
}
