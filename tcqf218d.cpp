#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
set <string> hasval;
set <string> userhashval;
set <string> tiushashval;
for(int i=0;i<n;i++){
 string time,user,hashval;
cin >> time>>user>>hashval;
hasval.insert(hashval);
userhashval.insert(user+hashval);
tiushashval.insert(time+user+hashval);
}
int s3 = hasval.size();
int s2 = userhashval.size();
int s1 = tiushashval.size();
if(s3 < n){
if(s2 == s3 && s1 == n)
cout<<1<<"\n";
else if(s2 > s3)
cout<<2<<"\n"; 
else
cout<<1<<"\n";
}
else
cout<<-1<<"\n";

}
return 0;
}
