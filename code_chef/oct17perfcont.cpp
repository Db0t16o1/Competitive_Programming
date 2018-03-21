#include<iostream>

using namespace std;

int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
int easy = 0,hard = 0;
int n,p;
cin>>n>>p;
int lambda = p/10;
int alpha = p/2;
//cin>>n>>p;
for(int j=0;j<n;j++){
int solvers;
cin>>solvers;
if(solvers <= lambda)
	hard+=1;
else if(solvers >= alpha)
	easy+=1;}
if (easy == 1 && hard == 2)
cout<<"yes\n";
else
cout<<"no\n";

//cout<<easy<<hard;
}
return 0;
}
