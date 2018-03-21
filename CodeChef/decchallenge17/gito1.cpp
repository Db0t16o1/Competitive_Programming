#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int m,n;
cin>>m>>n;
int sum1=0,sum2=0;
int input[m][n],p1[m][n],p2[m][n],diff1[m][n],diff2[m][n];
for(int xx=0;xx<m;xx++){
for(int yy=0;yy<n;yy++){
if(xx%2){
p1[xx][yy] = (yy%2==0)?-1:1;
p2[xx][yy] = ((yy+1)%2==0)?-1:1;
}
else{

p2[xx][yy] = (yy%2==0)?-1:1;
p1[xx][yy] = ((yy+1)%2==0)?-1:1;

}
}}
for(int i=0;i<m;i++){
string k;
cin>>k;
//cout<<k<<endl;
for(int j=0;j<n;j++){
if(k[j] == 'R')
input[i][j] = 1;
else
input[i][j] = -1;
//cout<<input[i][j]<<"\n";
diff1[i][j] = p1[i][j] - input[i][j];
//cout<<diff1[i][j]<< " ";
diff2[i][j] = p2[i][j] - input[i][j];
//cout<<diff2[i][j]<< "\n";
}
}
for(int i=0;i<m;i++)
{for(int j=0;j<n;j++){
if(diff1[i][j] == -2)
sum1+= 5;
if(diff1[i][j] == 2)
sum1+=3;
if(diff2[i][j] == -2)
sum2+=5;
if(diff2[i][j] == 2)
sum2+=3;

}}
if(sum1>sum2)
cout<<sum2<<"\n";
else
cout<<sum1<<"\n";
}
return 0;
}
