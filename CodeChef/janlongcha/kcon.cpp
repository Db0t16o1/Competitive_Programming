#include<iostream>
using namespace std;

long max_val(int a, long b){
if(a>b)
return a;
else return b;
}
long max_suba_sum(int* a,int n){
long max_till_now = a[0];
long curr_max = a[0];
for(int i=1;i<n;i++){
curr_max = max_val(a[i],a[i]+curr_max);
max_till_now = max(max_till_now,curr_max);
}
return max_till_now;
}

long max_suba_sum_via_zero(int* a, int n){
long max_till_now=a[0];
long curr_max = a[0];
for(int i=1;i<n;i++){
curr_max +=a[i];
max_till_now = max(max_till_now,curr_max);
}
return max_till_now;
}

long max_suba_sum_via_n(int* a, int n){
long max_till_now=a[n-1];
long curr_max = a[n-1];
for(int i=n-2;i>-1;i--){
curr_max +=a[i];
max_till_now = max(max_till_now,curr_max);
}
return max_till_now;
}


int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int ar[n];
long array_sum=0;
for(int i=0;i<n;i++)
{cin>>ar[i];array_sum+=ar[i];}
long max_array_sum = max_suba_sum(ar,n);
long max_array_sum_from_index_zero = max_suba_sum_via_zero(ar,n);
long xx = (k-2)*array_sum + max_array_sum_from_index_zero;
long max_n = max_suba_sum_via_n(ar,n);
long ans1 = max_array_sum;
long ans2 = max_array_sum_from_index_zero + max_n;
long ans3 = xx + max_n;
long max1 = max(ans1,ans2);
long max2 = max(max1,ans3);
if(k==2)
cout<<max1<<"\n";
else if(k==1)
cout<<max_array_sum<<"\n";
else
cout<<max2<<"\n";}
return 0;
}
