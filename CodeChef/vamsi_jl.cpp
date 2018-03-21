#include<iostream>
#include<cmath>
using namespace std;
int min(int a,int b){
if(a>b)
return b;
else
return a;
}
int max(int a,int b){
if(a>b)
return a;
else
return b;
}
int main(){
int t;
cin>>t;
while(t--){
int w,s,p,q;
cin>>w>>s>>p>>q;
if(p==q && w!=s)
cout<<"NO\n";
else if(w==s)
cout<<"YES\n";
else if(((w-s) & 1) && !(p & 1) && !(q & 1))
cout<<"NO\n";
else if(w>s){
int diff = w-s;
if((diff & 1) && !(q & 1) && (p & 1) && (q<p) && diff<p)
cout<<"NO\n";
else if(q==1)
cout<<"YES\n";
else if()
}
else
cout<<"YES\n";  

}
return 0;
}
