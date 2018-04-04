#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set <int> sink;

    for(int i=0;i<n;i++){
        int temp;
cin>>temp;
sink.insert(temp);
    }
    int count =n;
    
    for(int i=1;i<=n;i++){
        if(sink.find(i) != sink.end()) count--;
    }
    cout<<count;
    return 0;
}
