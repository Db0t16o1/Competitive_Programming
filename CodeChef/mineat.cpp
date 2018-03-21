//
// Created by astrode5 on 6/3/18.
//
#include <bits/stdc++.h>
using namespace std;
int anscalc(int lower_bound,int upper_bound, int* piles, int hours, int number){
    int mid = (upper_bound + lower_bound)/2;
    int ans = 0;
    for(int i=0;i<number;i++){
        ans+=ceil((double)piles[i]/mid);
    }
    if(ans > hours) {
        return anscalc(mid + 1, upper_bound, piles, hours, number);
    } else if(ans < hours) {
        return (lower_bound, mid, piles, hours, number);
    }
    else{
        int temp = mid;
        while (temp--){
            int temp_ans;
            for(int i=0;i<number;i++){
                temp_ans += ceil((double)piles[i]/temp);
            }
            if(temp_ans == hours)
                mid = temp;
        }
        return mid;
    }



}
int main(){
int t;
    cin>>t;
    while(t--){
        int n,h;
        cin>>n>>h;
        int piles[n];
        int max_num=0;
        for(int i=0;i<n;i++) {
            cin >> piles[i];
            if (piles[i] > max_num)
                max_num = piles[i];
        }
        sort(piles,piles+n);
        //the value of k varies between max_num and 1
        int ans = anscalc(1,max_num,piles,h,n);
        cout<<ans<<endl;
    }
    return 0;
}

