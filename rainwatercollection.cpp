#include <iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
int main()
{
    int diff=0;
    vector<int> v1;
    v1.push_back(3);
    v1.push_back(0);
    v1.push_back(2);
    v1.push_back(0);
    v1.push_back(4);
    for(int i=1;i<4;i++){
        int left=v1[i];
        for(int j=0;j<i;j++){
            left=max(left,v1[j]);
        }
        int right = v1[i];
        for(int j=i+1;j<5;j++){
            right= max(right,v1[j]);
        }
        diff+=(min(left,right)-v1[i]);
        cout<<diff<<" ";
    }
    cout<<diff;
}
//given the bars and their width and height calculate the rain water units
