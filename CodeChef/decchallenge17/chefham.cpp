#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1)
		{
			int xxx;
			cout<<"0\n";
			cin>>xxx;
			cout<<xxx<<"\n";
		}	
		else if(n==2){
			int x,y;
			cin>>x>>y;
			if(x == y)
			{cout<<"0\n"<<x<<" "<<y<<"\n";
			}else
			cout <<"2\n"<<y<<" "<<x<<"\n";
			}
			else if(n==3){
				int x,y,z;
				cin>>x>>y>>z;
			if(x==y || y==z || x==z)
				cout<<"2\n"<<y<<" "<<z<<" "<<x<<"\n";
			else
				cout<<"3\n"<<y<<" "<<z<<" "<<x<<"\n";
			}
			else{
			int ar[n],dif[n],ans[n];
			for(int i=0;i<n;i++){
			cin>>ar[i];
			dif[i] = -1;
			if((i+1) < n)
			ans[i+1] = ar[i];
			else
			ans[0] = ar[n-1];
			
			}
			//cout<<" This is the shifted array "<<"\n";
			int ll=0,t;
			for(int i=0;i<n;i++){
				if(ans[i]-ar[i] == 0)
				dif[ll++] = i;
				}
			if(ll==1){
				t = ans[dif[0]];
				ans[dif[0]] = ans[(dif[0]+2)%n];
				ans[(dif[0]+2)%n] = t;
				}			
			else if(ll!=0){/*while(ll--)
				cout<<dif[ll]<<" ";
					cout<<"\n";*/
				int temp = ans[dif[ll-1]];
				ll-=1;
				while(ll>0){
				ans[dif[ll]] = ans[dif[ll-1]];
				ll--;
				}
				ans[dif[ll]] = temp;}
				cout<<n<<"\n";
for(int a=0;a<n;a++)
cout<<ans[a]<<" ";
cout<<"\n";
}}
return 0;
}
