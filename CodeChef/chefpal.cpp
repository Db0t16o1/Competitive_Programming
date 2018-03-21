#include<iostream>
char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
int x,y;
cin>>x>>y;
int z = x/y;
if(z)
z+=1;
cout<<z;
string s = " ";
int k =0;
while(k<x){
s.pushback(alphabet[k%y]);
k++;
}

