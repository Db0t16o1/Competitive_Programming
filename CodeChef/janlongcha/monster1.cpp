#include<iostream>
#include<vector>
#include<cmath>
#include<cstdio>
using namespace std;


void set_creator( vector < int > *a, int n){
a[0].push_back(0);
a[1].push_back(1);
a[1].push_back(0);
a[2].push_back(2);
a[2].push_back(0);
for(int i=3;i<n;i++){
int alpha = log2(i);
int k;
int power=pow(2,alpha);
k = i - power;
a[i] = a[k];

for(vector <int>::iterator j = a[k].begin();j!=a[k].end();j++){
//int beta = *j + pow(2,alpha);
a[i].push_back(*j + power);
}
}
}

int main(){
int n,brahma;
scanf("%d",&n);
int ar[n];
int limit = ceil(log2(n));
limit = pow(2,limit);
vector  < int > aset[limit]; 
set_creator(aset,limit);
int count = n;
for(int i=0;i<n;i++){
ar[i] = 1;
//scanf("%d",ar+i);
}
brahma = limit - 1;
int q;
scanf("%d",&q);

int jj=0;
while(q--){
int x,y;
x = q;
y = 1;
//scanf("%d%d",&x,&y);
x  = x & brahma;
for(vector <int>::iterator i=aset[x].begin();i!=aset[x].end();i++){
//cout<<"element: "<<x<<" "<<*i<<"\n";
if(*i <= n){
if (ar[*i]>0){
ar[*i]-=y;
if(ar[*i]<=0)
{count--;
//aset[x].erase(i);
}
}
}
}
printf("%d\n",count);
}

return 0;
}
