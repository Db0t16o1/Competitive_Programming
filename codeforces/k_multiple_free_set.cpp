//
// Created by astrode5 on 23/3/18.
//

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    set <unsigned long long int> sink;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    sort(arr,arr+n);
    int ans = n;
    for(int i=0;i<n-1;i++){
      if(binary_search(arr+i+1,arr+n,(unsigned long long int)k*arr[i]) && (sink.find(arr[i])==sink.end())){
          sink.insert((unsigned long long int)k*arr[i]);
          ans--;
        }
    }
    cout<<ans<<endl;
return 0;
}