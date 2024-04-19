#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<vector<int>>v;
    vector<int>temp;
      
    for(int i=0;i<N;i++){
        int x; cin>>x;
        for(int j=0;j<x;j++){
          int ele;cin>>ele;
          temp.push_back(ele);
        }
        v.push_back(temp);
    }
}
