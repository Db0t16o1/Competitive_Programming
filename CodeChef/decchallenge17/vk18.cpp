#include<iostream>
using namespace std;
int box[2000000];
int sum[1000000];
int abs_e_o(int x)
{int e=0,o=0;
while(x>0){
int l = x%10;
if(l%2==0)
l+=e;
else
l+=o;
x/=10;
}
return abs(o-e);
}
int main(){


}
