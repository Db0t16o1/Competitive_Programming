#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int fingers[n];
int glovesf[n],glovesr[n];
for(int i=0;i<n;i++){
cin>>fingers[i];
}
for(int i=0;i<n;i++){
cin>>glovesf[i];
glovesr[n-1-i] = glovesf[i];
}
int ff=0,bf=0;
for(int i=0;i<n;i++){
if(fingers[i] > glovesf[i])
ff=1;
if(fingers[i] > glovesr[i])
bf = 1;
}
if(ff==0 && bf==0)
cout<<"both\n";
else if(ff==0)
cout<<"front\n";
else if (bf ==0)
cout<<"back\n";
else
cout<<"none\n";
}
return 0;
}
