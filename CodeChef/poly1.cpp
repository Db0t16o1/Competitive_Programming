#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
int n;
cin>>n;
int ar[n][4];
for(int j=0;j<n;j++){
for(int k=0;k<4;k++)
	cin>> ar[j][k];
}
int q;
cin>>q;
for(int j=0;j<q;j++){
int x;
int xx = x * x;
int xxx = x* xx;
cin>>x;
for(int k=0;k<n;k++)
int m = ar[k][0] + x * ar[k][1] + xx* ar[k][2] + xxx* ar[k][3];
if(min>m)
min = m;

}


}
