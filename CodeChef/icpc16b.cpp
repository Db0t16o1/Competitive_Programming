#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int ar[4];
		int temp;
		
			for(int k=0;k<4;k++)
				ar[k] = 0;
		for(int j=0;j<n;j++){
			cin>>temp;
			if (temp > 1){
				ar[3] += 1;
				}
			else if (temp == -1)
				ar[1] += 1;
			else if (temp == 1)
				ar[2] += 1;
			else if(temp < -1)
				{
				ar[0] += 1;

				}
		
			

}

		if((ar[0] > 1) || (ar[3] > 1))
			cout<<"no\n";
		else if((ar[1] > 1) && (ar[2] == 0))
			cout<<"no\n";
		else if((ar[0]>0) && (ar[1]>0))
			cout<<"no\n";
		else if((ar[0] || ar[1]) && ar[3])
			cout<<"no\n";
		else 
			cout<<"yes\n";
}
return 0;
}
