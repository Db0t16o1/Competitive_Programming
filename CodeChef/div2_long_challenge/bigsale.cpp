#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long double total_loss=0;
        while(n--){
            long double product,quantity,discount;
            cin>>product>>quantity>>discount;
            long double loss;
            loss = product*((discount/100) + 1) ;
            loss = loss*((discount/100)*(-1)+1);
            loss = (-1*loss)+product;
            loss = loss * quantity;
            total_loss += loss;

        }
        printf("%Lf\n",total_loss);
    }

    return 0;
}
