#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  int arr[]={2,7,11,15};int target=9;
  vector<pair<int,int>> mp;
  int n=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==target){
            mp.push_back({i,j});
        }
    }
}
for(int i=0;i<mp.size();i++){
    cout<<mp[i].first<<" "<<mp[i].second;
}
    return 0;
}

//O(N^2)
