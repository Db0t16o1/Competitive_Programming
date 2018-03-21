#include<bits/stdc++.h>
using namespace std;
int main(){
int n,d;
cin>>n>>d;
long long int arr[n];
int pos[n];
for(int i=0;i<n;i++){
cin>>arr[i];

}
long long int count=0;
for(int i=0;i<n;i++){
long long int z;
z = (long long int)(lower_bound(arr+i+1,arr+n,arr[i]+d+1)-arr);
if(z-i-2 > 0)
count+=((z-1-i)*(z-2-i))/2;
}
cout<<count;
return 0;
}

