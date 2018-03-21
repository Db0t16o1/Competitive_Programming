#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
vector < set <int, greater <int> > > ans;
do
    {
        int a1,a2 ;
	set <int, greater <int> > temp;
        if ( cin >> a1>>a2 ){
            temp.inset(a1);
		temp.insert(a2);}
    } while ( cin && cin.peek() != '\n' ) ;
