#include<iostream>
#include<map>
using namespace std;
int main(){
    typedef map<string,int> map1;
    string name;
    int valuz;
    map1 p1;
    cout<<"enter 3 key value pair"<<endl;
    for(int i=0;i<3;i++){
        cin>>name;
        cin>>valuz;
        p1[name]=valuz;
    }
    cout<<endl;
    //add a pair using insert() function
    p1.insert(pair<string,int> ("bob",112));
    map1 :: iterator p;
    cout<<"printing the map pair"<<endl;
    for(p=p1.begin();p!=p1.end();++p){
        cout<<(*p).first<<" "<<(*p).second<<endl;
    }
    
}
// the final map elements will be sorted based on the key value in alphabetical order by default
