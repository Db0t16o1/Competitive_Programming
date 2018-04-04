#include<bits/stdc++.h>
using namespace std;
int main(){
string text;
int m;
cin>>text>>m;
long long int sum=0;
int index_sum[text.length()/2 ] = {0};
for(int i=0;i<m;i++){
int entry;
cin>>entry;
index_sum[entry-1]++;
}
for(int i=0;i<text.length()/2;i++){
sum += index_sum[i];
if(sum & 1)
swap(text[i],text[text.length()-i-1]);
}
cout<<text<<endl;
return 0;
}
