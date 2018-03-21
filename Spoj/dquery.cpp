/* Mo's algorithm implementation, by db0t16o1, 27-10-17*/
#include<bits/stdc++.h>

using namespace std;

int block;
int numbers[1000001];
struct Query {int l,r,index,ans;};

bool compare(Query x,Query y){
	if(x.l/block != y.l/block)
		return x.l/block < y.l/block;
	else
		return x.r < y.r;}
bool cmp(Query x,Query y){
return x.index < y.index;

}
void queryres(int* a,int n, Query* q, int m){
	block = (int) sqrt(n);
	sort(q,q+m,compare);
	int curl=0,curr=0,currdc=0;
	for(int i=0;i<1000001;i++)
		numbers[i] = 0;
	for ( int i=0;i<m;i++){
		int l = q[i].l,r = q[i].r;
		while(curl < l){
			numbers[a[curl]]-=1;
			if(!numbers[a[curl]])
				currdc -=1;
			curl++;
}
	
		while(curl > l){
			numbers[a[curl-1]]+=1;
			if(numbers[a[curl-1]] == 1)
				currdc +=1;
			curl--;
}
		while(curr > r+1){
			numbers[a[curr-1]]-=1;
			if(!numbers[a[curr-1]])
				currdc -=1;
				curr--;
}
		while(curr <= r){
			numbers[a[curr]]+=1;
			if(numbers[a[curr]] == 1)
				currdc +=1;
			curr++;
}
q[i].ans = currdc;
}


}

int main(){
int n;
scanf("%d",&n);
int ar[n];
for(int i=0;i<n;i++){
scanf("%d",ar+i);
}
int q;
scanf("%d",&q);
Query qq[q];
for(int i=0;i<q;i++){
scanf("%d%d",&(qq[i].l),&(qq[i].r));
qq[i].l -= 1;
qq[i].r -= 1;
qq[i].index = i;
}
queryres(ar,n,qq,q);
sort(qq,qq+q,cmp);
for(int i=0;i<q;i++)
printf("%d\n",qq[i].ans);
return 0;
}
