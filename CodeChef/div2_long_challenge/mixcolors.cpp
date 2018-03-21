//
// Created by astrode5 on 6/3/18.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set <int> s;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            s.insert(ar[i]);
        }
        cout<<n-s.size()<<endl;
    }
    return 0;
}
