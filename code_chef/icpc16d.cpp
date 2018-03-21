#include<iostream>
#include<vector>
using namespace std;
int fact[870];
int mult[870];
Vector <int> g1;
vector <int> :: iterator i;
int main(){
	int n;
	cin>>n;
for(int i=0i<n;i++){
	int m;
	cin>>m;
	g1.clear();
	for(int j=0;j<870;j++)
		fact[j] = 0;
	for(int j=0;j<m;j++){
		int x;
		cin>>x;
		for(int k=1;k<870;k++){
			if(x%k == x)
				break;
			else
		{
			if(x%k == 0)
				fact[k] += 1;

			else
				g1.push_back(x);		
			if(x == k)
				mult[k] += 1;
}
			
}
int ans = m;


}
