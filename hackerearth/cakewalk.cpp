#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int sum=0;
while(n/2){
sum+=1;
n/=2;
}
cout<<sum;
return 0;
}
