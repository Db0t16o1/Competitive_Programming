#include<bits/stdc++.h>
using namespace std;

bool cmp(long s1, long s2){
bool x = (to_string(s1)+to_string(s2))>(to_string(s2)+to_string(s1))?true:false;
return x;
}
int main(){
int n;
cin>>n;
long s[n];
for(int i=0;i<n;i++){
cin>>s[i];
//s[i].shrink_to_fit();}

}sort (s,s+n,cmp);
for(int i=0;i<n;i++)
cout<<s[i];
return 0;
}
