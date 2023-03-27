#include <bits/stdc++.h> 
void occurrenceOfEachWord(string s)
{
    map<string,int> p1;
    string s1="";
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){ 
            if(s1==""){
                continue;
            }
            if(p1.find(s1)==p1.end()){
                p1.insert(make_pair(s1,1));
            }
            else{
              p1[s1]++;
            }
        s1="";
        }
        else{
          s1 += s[i];
        }    
    }
    if (s1 != "")
	{
		p1[s1]++;
	}
    for (auto &p : p1){
        cout<<p.first<<" "<<p.second<<endl;
    }  
}
int main(){
  string s="  a b  c d e f a  ";
  occurrenceOfEachWord(s);
  
}
