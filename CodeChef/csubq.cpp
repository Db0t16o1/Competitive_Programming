#include<iostream>
using namespace std;
int main(){
int n,q,l,r;
cin>>n>>q>>l>>r;
int number[n];
int outbound[n];
for(int i=0;i<n;i++){
number[i] = 0;
overbound[i] = -1;
inbound[i] = -1;}
int k=0,h=0;
for(int i=0;i<q;i++){
	int u,v,w,ans = 0;
	cin>>u>>v>>w;
	if(u == 1){
		number[v-1] = w;
		if(w>r)
			overbound[k++]=v-1;
		if(w<=l && w>=r)
			inbound[h++] = v-1;
		sort(inbound,inbound+n,greater<int>());
		sort(overbound.overbound+n,greater<int>());
	}else
		{
		for(int j=(v-1);j<(w-1);j++){
			
			
}
}
}
return 0;
}
