#include<iostream>
#include<cmath>
using namespace std;
/*long long int f(int x,int n,int b){
long long int xx = (n-x)/b;
return x*xx;

}*/
double eq(long long int x,long long int y,long long int z){
return ((y-x)*x)/z;
}
int main(){
int t;
cin>>t;
while(t--){
long long int n,b;
cin>>n>>b;
if(b>=n)
{cout<<"0\n";
continue;}
/*int k;
k= n/2;
if(f(ceil(n/2),n,b) > f(k,n,b))
cout<<f(ceil(n/2),n,b)<<"\n";
else
cout<<f(k,n,b)<<"\n";
*/
double ans_f = eq(floor(n/2),n,b);
double ans_c = eq(ceil(n/2),n,b);
long long int an_f=ans_f,an_c=ans_c;
long long int floor_k = floor(n/2);
long long int ceil_k = ceil(n/2);
while((ans_f != an_f) | (ans_c != an_c)){
floor_k-=1;
ceil_k+=1;
ans_f = eq(floor_k,n,b);
ans_c = eq(ceil_k,n,b);
an_f = ans_f;
an_c = ans_c;
}
if(ans_f == an_f){
if(ans_c == an_c){
long long int k = an_f>an_c?an_f:an_c;
cout<<k<<"\n";
}
else
cout<<an_f<<"\n";
}
else
cout<<an_c<<"\n"; 
}
return 0;}
