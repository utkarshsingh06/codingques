#include <iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
void findout(int &i,vector<int> &v1,vector<int> &v2,vector<vector<int>> &intervals)
{
    int s1=v1[0];
    int e1=v1[1];
    int s2=v2[0];
    int e2=v2[1];
    if(e1>=s2){
        if(e1>e2){
            intervals.erase(intervals.begin()+i+1);
        }
        else{
            v1[1]=v2[1];
            intervals.erase(intervals.begin()+i+1);
        }
    }
    else{
        i++;
    }
}
vector<vector<int>> merge(vector<vector<int>> &intervals){
    int i=0;
    sort(intervals.begin(),intervals.end());
    while(i<intervals.size()-1){
        findout(i,intervals[i],intervals[i+1],intervals);
    }
    return intervals;
}
int main()
{
    int start,end;
    vector<vector<int>> intervals(4);
    for(int i=0;i<4;i++){
        cin>>start>>end;
        intervals[i].push_back(start);
        intervals[i].push_back(end);
    }
    vector<vector<int>> res=merge(intervals);
        
    
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<intervals[i][j]<<" ";
        }
        cout<<endl;
    }
}
/*BUT ABOVE CODE GIVES TIME COMPLEXITY OF O(n^2)
/SO WE USE A NEW APPROACH BY CREATING A NEW VECTOR(ans) AND PUSH THE FINAL INTERVALS IN THIS VECTOR
/ for(int i=0;i<ans.size()-1;i++){
if(ans.empty()==1{
ans.push_back(intervals[i]);
}
if(intervals[i][0]>ans.back()[1])
{
ans.push_back(intervals[i];
}
else{
ans.back()[1]=max(intervals[i][1],ans.back()[i]); ////IMPORTANT LINE
}
return ans;
}*/
