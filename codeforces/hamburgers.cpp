#include<bits/stdc++.h>
using namespace std;
int main(){
    string receipe;
    cin>>receipe;
    int bread=0,sausage=0,cheese=0;
    for(auto i=receipe.begin();i!=receipe.end();i++){
        if(*i == 'B')
            bread++;
        else if(*i == 'S')
            sausage++;
        else
            cheese++;
    }
    int has_bread,has_sausage,has_cheese;
    cin>>has_bread>>has_sausage>>has_cheese;
    int price_bread,price_sausage,price_cheese;
    cin>>price_bread>>price_sausage>>price_cheese;
    long long int wallet;
    cin>>wallet;
    long long int hamburgers=0,lw_bnd=0,up_bnd=pow(10,12)+100;
    while(true){
        long long int mid = lw_bnd + (up_bnd-lw_bnd+1)/2;
        long long int needed[3];
        needed[0] = (mid*bread - has_bread) * price_bread;
        //cout<<needed[0];
        needed[1] = (mid*sausage - has_sausage)*price_sausage;
        needed[2] = (mid*cheese- has_cheese)*price_cheese;
        long long int total_needed = 0;
        for(int i=0;i<3;i++){
            if(needed[i]>0)
                total_needed+=needed[i];
        }
        if(lw_bnd == up_bnd)
        {
            hamburgers = lw_bnd;
            break;
        }
        else if(wallet >= total_needed){
            lw_bnd = mid;
        }
        else
            up_bnd = mid-1;
    }
    cout<<hamburgers<<endl;
    return 0;
}
