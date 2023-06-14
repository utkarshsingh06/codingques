/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T>
class graph{
    public:
    unordered_map<int,list<T>> a1;
    void addinlist(T u,T v,bool direc){
        a1[u].push_back(v);
        if(direc==0){
            a1[v].push_back(u);
        }
    }
    void printgraph(){
        for(auto i:a1){
            cout<<char(i.first)<<"->";
            for(auto j: i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    int n,m;
    cout<<"enter the number of nodes"<<endl;
    cin>>n;
    cout<<"enter the number of edges"<<endl;
    cin>>m;
    graph<char> g;
    for(int i=0;i<m;i++){
        char u,v;
        cin>>u>>v;
        g.addinlist(u,v,0);
    }
    g.printgraph();
}

