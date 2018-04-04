#include<bits/stdc++.h>
using namespace std;
struct foo{
    int ind;
    int costinitial;
    long long int strangecost;
};
bool foo_comp(foo a, foo b){
        return a.strangecost < b.strangecost;
};
long long int binary_search_customized(int lw_bnd, int up_bnd, long long int target, int *answer, foo *arr, int array_length){
    int mid = lw_bnd + (up_bnd-lw_bnd + 1)/2;
    for(int i=0;i<=array_length;i++){
        arr[i].strangecost = arr[i].costinitial + (long long int)arr[i].ind * mid;
    }
    sort(arr,arr+array_length,foo_comp);
    long long int temp_val = 0;
    for(int i=0;i<mid;i++){
        temp_val+=arr[i].strangecost;
    }
    if(lw_bnd == up_bnd || target == temp_val){
	 if(temp_val<= target){
            *answer = mid;
            return temp_val;} else return 0;



    }
    else if(target > temp_val){
        return binary_search_customized(mid,up_bnd,target,answer,arr,array_length);
    }
    else if (target < temp_val){
        return binary_search_customized(lw_bnd,mid-1,target,answer,arr,array_length);
    }
else
        return 0;


}
int main(){
   int n;
    long long int k;
    cin>>n>>k;

    foo arr[n];

    for(int i=0;i<n;i++){

        cin>>arr[i].costinitial;

        arr[i].ind = i + 1;

        arr[i].strangecost = 0;

    }

    int temp = 0;

    int *num = &temp;

    long long int answer = 0;
    answer = binary_search_customized(1, n, k, num, arr,n);
    cout<<temp<<" "<<answer<<endl;
    return 0;
}

