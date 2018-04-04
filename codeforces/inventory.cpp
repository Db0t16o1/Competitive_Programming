#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num[n];
    set <int> domain;
    for(int i=0;i<n;i++){
        domain.insert(i+1);
    }
    map <int,int > dict;
    deque <int> stack;
    for(int i=0;i<n;i++){
        cin>>num[i];
    if(dict.find(num[i]) == dict.end()) {
        dict.insert(pair<int, int>(num[i], 1));
        domain.erase(num[i]);
    }else
        dict[num[i]]++;
    }
    for(int i=0;i<n;i++){
        if(dict[num[i]] > 1 || num[i]>n){
            dict[num[i]]--;
            num[i] = *(domain.begin());
            domain.erase(num[i]);
        }

    }
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    return 0;
}
