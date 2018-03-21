#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
for(int i=0;i<t;i++){
long n;
int turn;
scanf("%ld%d",&n,&turn);
if(turn == 0)
printf("Airborne wins.\n");
else
printf("Pagfloyd wins.\n");
}
return 0;}


