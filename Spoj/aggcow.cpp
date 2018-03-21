#include<bits/stdc++.h>
using namespace std;

int maxima_of_minima(vector<int> distance, int cows){
int n = distance.size();
int lo = *min_element( distance.begin(), distance.end());
int hi = accumulate( distance.begin(), distance.end(),0);
while( lo< hi){
int x = lo + (hi-lo+1)/2;
int required = 1, curr_dis = 0,min=0;
for(int i=0;i<n;i++){
if(curr_dis <  x){
curr_dis += distance[i];
}
else
{
++required;

curr_dis = distance[i];

}
if(i==n-1 && curr_dis < x)
required--;
}

if(required < cows)
hi = x-1;
else 
lo = x;
}
return lo;
}

int main(){
int t;
cin>>t;
while(t--){
int n,cows;
cin>>n>>cows;
int ii,jj;
int position[n];
vector <int> distance;
for(int i=0;i<n;i++)
cin>>position[i];
sort(position, position+n);
for(int i=1;i<n;i++)
distance.push_back(position[i]-position[i-1]);
int ans = maxima_of_minima(distance,cows-1);
cout<<ans<<"\n";}
return 0;
}
