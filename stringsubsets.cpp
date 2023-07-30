#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void findsubset(vector<int>&v,vector<int> &sub,vector<vector<int>> &ans,int ind){
    if(ind==v.size()){
        ans.push_back(sub);
        return;
    }
    //include the v[i] in subset
    sub.push_back(v[ind]);
    findsubset(v,sub,ans,ind+1);
    
    //not include the v[i] n subset

    sub.pop_back();
    findsubset(v,sub,ans,ind+1);
}
int main()
{
    vector<int> v={1,2,3};
    vector<int> sub;
    vector<vector<int>> ans;
    findsubset(v,sub,ans,0);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<" ";
    }
    
}
