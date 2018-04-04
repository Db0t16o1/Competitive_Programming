#include <bits/stdc++.h>
using namespace std;
int main(){
    string crying;
    cin>>crying;
    int length = crying.length();
    int q[length]={0};
    int qa[length]={0};
    int qaq[length]={0};
    for(int i=0;i<length;i++){
        if(i){
            q[i] = q[i-1];
            qa[i] = qa[i-1];
            qaq[i] = qaq[i-1];
        }

        if(crying[i]=='Q'){
            q[i]+=1;
            qaq[i]+=qa[i];

                    }
        else if(crying[i] == 'A'){
            qa[i]+=q[i];
        }


    }
    cout<<qaq[length-1];
    return 0;
}
