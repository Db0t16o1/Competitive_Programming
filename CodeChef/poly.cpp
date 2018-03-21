#include<iostream>
using namespace std;

long long min(int z,int a[][4],int n){
long long mini;
//int z0 = 1;
int z1 = z;
long long z2 = z*z1;
long long z3 = z*z2;
mini = a[0][0]+(z1*a[0][1])+(z2*a[0][2])+(z3*a[0][3]);
//cout<<mini;
for(int i=1;i<n;i++){
long long m = a[i][0]+(z1*a[i][1])+(z2*a[i][2])+(z3*a[i][3]);
//cout<<" "<<m;
if(m<mini)
mini = m;
}
//cout<<"\n";
return mini;

}

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int ar[n][4];
		for(int j=0;j<n;j++){
			for(int k=0;k<4;k++){
				cin>>ar[j][k];
				}
			}
		int q;
		cin>>q;
		for(int j=0;j<q;j++){
			int x;
			cin>>x;
			cout<<min(x,ar,n)<<endl;
		}
	}

return 0;}
