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
// we can also reduce time complexity by assigning left and right max of current bar
// left[0] = arr[0];
//     for (int i = 1; i < n; i++)
//         left[i] = max(left[i - 1], arr[i]);
  
//     // Fill right array
//     right[n - 1] = arr[n - 1];
//     for (int i = n - 2; i >= 0; i--)
//         right[i] = max(right[i + 1], arr[i]);
//
