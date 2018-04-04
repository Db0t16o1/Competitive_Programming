#include <bits/stdc++.h>
using namespace std;
struct node{
    int round;
    int score;
    string name;
};
bool foo(node a, node b){

    return a.round<b.round;

}
int main(){
    int n;
    cin>>n;
    map <string,int> scorer;
   // vector <pair<string,int> > final_score;
    node  players[n];
    for(int i=0;i<n;i++){
        string name;
        int score;

        cin>>name>>score;
        if(scorer.find(name) == scorer.end())
        scorer.insert(pair<string,int>(name,score));
        else
            scorer[name] += score;
        players[i].round = i+1;
        players[i].name = name;
        players[i].score = scorer[name];
//        cout<<players[i].round<< " " <<players[i].name << " " <<players[i].score<<endl;
    }
    sort(players,players+n,foo);
    int max=0; set <string> name_set;
    for(auto i=scorer.begin();i!=scorer.end();i++){
        if(i->second > max)
            max = i->second;

    }
    for(auto i=scorer.begin();i!=scorer.end();i++){
        if(i->second == max){
            name_set.insert(i->first);
        }

    }
    node alpha;
    alpha.score = max;
    alpha.round = n;
    if (name_set.size() == 1)
    {
        auto it = name_set.begin();
        cout<<*it;
    }
    else {

        for(node* index=players;index!=players+n;index++){
        if((name_set.find(index->name)!= name_set.end()) && (alpha.round > index->round) && (index->score >= alpha.score)){
            alpha.name = index->name;
            alpha.round = index->round;
            //cout<<"hello";
        break;
        }

        }
        cout<<alpha.name;
    }
    return 0;
}
