#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 100001;
 
int factor[MAX] = { 0 };
 
void gpf()
{    
    factor[1] = 1;
 
    for (int i = 2; i < MAX; i++)
        factor[i] = i;
 
    for (int i = 4; i < MAX; i += 2)
        factor[i] = 2;
 
    for (int i = 3; i * i < MAX; i++) 
    {
        if (factor[i] == i) 
        {
            for (int j = i * i; j < MAX; j += i) 
            {
                if (factor[j] == j)
                    factor[j] = i;
            }
        }
    }
}
 
int cf(int n)
{
    if (n == 1)     
        return 1;
 
    int ans = 1;
     
    int dup = factor[n];
     
    int c = 1;
     
    int j = n / factor[n];
     
    while (j != 1) 
    {
        if (factor[j] == dup) 
            c += 1;
         
        else
        {
            dup = factor[j];
            ans = ans * (c + 1);
            c = 1;
        }
 
        j = j / factor[j];
    }
 
    ans = ans * (c + 1);
 
    return ans;
}
int main(){
int n;
cin>>n;
gpf();
int xx =cf(n);
cout<<xx-1;
return 0;}

