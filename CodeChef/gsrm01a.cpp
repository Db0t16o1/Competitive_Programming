#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;
int a[t];
for(int i=0;i<t;i++){
a[i] = 0;}
for(int i=0;i<t;i++){
	int n,k;
	cin>>n>>k;
	
int sum =0;
	for(int j=0;j<n;j++){
	int x;
	cin>>x;
	
	sum+=x;
	if(sum >= k)
		a[i] = 1;
}
}
for(int i=0;i<t;i++)
{
if ( a[i])
	cout<<"YES\n";
else
	cout<<"NO\n";
}
return 0;
}
