// Created by astrode5
// 23 March 2018
#include<bits/stdc++.h>
using namespace std;
struct foo{
    int index;
    int val;
};
bool foo_comp(foo a, foo b){
        return a.val < b.val;
};
int main(){
   int n;
    int k;
    cin>>n>>k;
    foo arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].val;
        arr[i].index = i + 1;
    }
    sort(arr,arr+n,foo_comp);
    int prefix_arr[n],sum[n],solution[n];
    prefix_arr[0] = arr[0].index;
    sum[0] = arr[0].val;
    solution[0] = prefix_arr[0] + sum[0];
    for(int i=1;i<n;i++){
        prefix_arr[i]=arr[i].index+prefix_arr[i-1];
        sum[i] = arr[i].val + sum[i-1];
        solution [i] = (i+1)*prefix_arr[i] + sum[i];}
        int* ptr = upper_bound(solution,solution+n,k);

    ptr = ptr -1;
        if(*ptr <= k)
        cout<<ptr-solution+1<<" "<<*ptr;
        else
            cout<<0<<" "<<0;
    return 0;
}
