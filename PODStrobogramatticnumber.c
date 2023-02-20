#include <bits/stdc++.h> 
bool isStrobogrammatic(string &n)
{
    bool res=true;
    int i=0;
    int p=n.length();
    while(i<n.length()){
        if(n[i]=='2'||n[i]=='3'||n[i]=='4'||n[i]=='5'||n[i]=='7'){
            res=false;
            break;
        }
        else if((n[i]=='8'||n[i]=='0'||n[i]=='1') && n[i]!='\0'){
            i++;
        }
        else if(n[i]=='6'){
            if(n[p-i-1]=='9'){
                i++;
            }
            else{
                res=false;
                break;
            }
        }
        else if(n[i]=='9'){
            if(n[p-i-1]=='6'){
                i++;
            }
            else{
                res=false;
                break;
            }
        }

    }
    return res;
}
int main(){
  string s1;
  cin>>s1;
  bool res= isStrobogrammatic(s1);
  if(res){
    cout<<"TRUE";}
  else{
  cout<<"FALSE";}
}
