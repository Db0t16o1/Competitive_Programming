#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
int ans=0;
int min = 1000000001;
for (int i=0;i<n;i++)
{
cin>>arr[i];
}
int left=0,right=0;
min = 0;
while (true){
for(int i=0;i<n;i++){
if(arr[i+1]<=arr[i] && i<n-1 && arr[i+1]!=0){
right++;
}
else if(arr[i+1]<arr[i] &&)
}
}
return 0;
}
