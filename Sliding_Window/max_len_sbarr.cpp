#include<bits/stdc++.h>
using namespace std;
int main(){
    //longest subarray with sum <=k
    vector<int>v={2,5,1,7,10}; int k=8;
    int n=v.size();
    //brute force
    int max_len=0;int sum; 
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum=sum+v[j];
            if(sum<=k){
                max_len=max(max_len, j-i+1);
            }else if (sum>k) break;
        }
    }
    cout<<"length: "<<max_len<<endl;
}

//this is brute force solution 