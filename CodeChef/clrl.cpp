#include<iostream>
using namespace std;

int check(int i,int* min, int* max,int* a,int rat,int n){


if(a[i] > rat){
if(a[i] >= *max)
	return 0;
*max = a[i];

}
else if(a[i] < rat){
if(a[i] <= *min)
	return 0;
*min = a[i];
}
else
{
if(i!=n )
return 0;
}

if(i==n && a[n] != rat)
return 0;
else
return 1;
}


int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
int num,id;
cin>>num>>id;
int flag = 1,min=0,max=1000000001;
int* mi =&min;
int *ma = &max;
int ar[num];

for(int j=0;j<num;j++){
cin>>ar[j];
if(check(j,mi,ma,ar,id,num-1) == 0)
flag = 0;
}
if (flag == 0)
	cout<<"NO\n";
else
	cout<<"YES\n";


}
return 0;}
