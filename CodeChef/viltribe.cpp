#include<iostream>
using namespace std;
int main(){

int t;
cin>>t;

for(int i=0;i<t;i++){
string x;
cin>>x;
int y = x.length();
int coa=0,cob=0;
int prev= 2;
int dco=0;
for(int k=0;k<y;k++){
if(x[k] == '.' && prev == 2)
	k++;
if(x[k] == 'A')
	{
	if((dco!=0) && (prev == 1))
		coa += dco;
	dco = 0;
	prev = 1;
	coa++;}
	
else if ( x[k] == 'B'){
if(dco && prev == -1 ){

cob += dco;

}
dco = 0;
prev = -1;
cob++;
}
else{
dco++;
}

}
cout<<coa<<" "<<cob<<endl;
}
return 0;}
