
#include<algorithm>
#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string s1,s3="";
    getline(cin,s1);
    vector<string> s2;
    int i=0;
    while(s1[i]!='\0'){
        if(s1[i]==' '){
            reverse(s3.begin(),s3.end());
            s2.push_back(s3);
            s3="";
        }
        else{
            s3+=s1[i];
        }
        i++;
        
    }
    for(int i=0;i<s2.size();i++){
        cout<<s2[i]<<" ";
    }
    reverse(s3.begin(),s3.end());
    cout<<s3;
}
