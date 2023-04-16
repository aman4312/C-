/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

unordered_map<string , int>m1;

bool static cmp(pair<string,int>&a, pair<string, int>& b){
    if (a.second != b.second) {
            return a.second > b.second;
        } else {
            return m1[a.first]<m1[b.first];
        }
}
int main()
{
    string s="Practice makes perfect. you'll only get Perfect by practice. just practice";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string result = "";
    for (char c : s) {
        if (!ispunct(c)) { ;
            result += c;
        }
    }
    s = result;
     vector<string>split;
    string v;
    unordered_map<string , int>m;
  for(auto i:s){
    if(i==' '){
      split.push_back(v);
      v="";
    }
    else v+=i;
  }
    if(v.length()>0)split.push_back(v);
    
    for(auto i =0 ;i<split.size();i++){
        if(m1.find(split[i])== m1.end()){
            m1[split[i]]=i;
        }
    }
    
    
  //  for(auto i:m1)cout<<i.first<<" "<<i.second;
    for(auto i:split)m[i]++;
  //for(auto i:m)cout<<i.first<<" "<<i.second<<" ";

  vector<pair< string, int >>pairs;
  for(auto i:m){
    pairs.push_back({i.first, i.second});
  }
  sort(pairs.begin(), pairs.end(), cmp);
        
  vector<vector<string>>ans;
  for(auto i:pairs){
    vector<string>temp;
    temp.push_back(i.first);
    temp.push_back(to_string(i.second));
    ans.push_back(temp);
    
  }
  for(int i =0;i<ans.size();i++){
      for(int j =0 ; j<ans[0].size();j++){
          cout<<ans[i][j]<<" ";
      }
  }
  




    return 0;
}
