//UTKARSH SINGH
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void checkpermut(string s,string ans,vector<string> &v1){
    if(s.length()==0){
        v1.push_back(ans);
        return ;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string left=s.substr(0,i);
        string right=s.substr(i+1);
        string rest=left+right;
        checkpermut(rest,ans+ch,v1);
        
    }
}
int main()
{
    string s="Vin";
    string ans="";
    vector<string> v1;
    checkpermut(s,ans,v1);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}
