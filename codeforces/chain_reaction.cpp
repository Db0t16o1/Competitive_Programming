#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct beakon{
int pos;
int pow;
};
int search(int k,const vector <int> &a,int n){
auto iter = upper_bound(a.begin(),a.end(), k);
if(iter != a.begin())
return distance(a.begin(),prev(iter));
return -1;
}
bool foo(beakon a, beakon b){
return a.pos < b.pos;
}
int main(){
int num;
cin>>num;
beakon b[num];
for(int i=0;i<num;i++){
cin>>b[i].pos>>b[i].pow;
}
sort(b,b+num,foo);
vector <int> arr;
for(int i=0;i<num;i++){
arr.push_back( b[i].pos);

}
int ans[num+1];
for(int i=0;i<=num;i++){
if(i==0)
ans[0] = 0;
else{
int xx = search(b[i-1].pos - b[i-1].pow-1,arr,num);
//cout<<xx<<endl;
ans[i] = 1 + ans[xx+1];
//cout<<i<<" "<<ans[i]<<endl;
}
}
int max=0;
for(int i=0;i<=num;i++)
if (ans[i] > max) max = ans[i];
cout<<num-max;
return 0;
}
