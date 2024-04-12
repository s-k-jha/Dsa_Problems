#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int>v={2,7,11,15};int target=18;
  unordered_map<int,int>mp;
  
  for(int i=0;i<v.size();i++){
      int rem= target-v[i];
      if(mp.find(rem) != mp.end()){
       cout<< mp[rem]<<i;
      }
      else{
            mp[v[i]]=i;
      }
      
  }
   
}

//O(N)
