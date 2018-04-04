#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    set <int> sink;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sink.insert(arr[i]);
    }

    sort(arr,arr+n);
   
    for(int i=0;i<n-1;i++){
      if(sink.find(arr[i]*k) != sink.end()){
          sink.erase(arr[i]*k);
        }
    }
    cout<<sink.size()<<endl;
return 0;
}
