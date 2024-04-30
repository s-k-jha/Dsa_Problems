#include<bits/stdc++.h>
using namespace std;
int main(){
    //longest subarray with sum <=k
    vector<int>v={2,5,1,7,10}; int k=8;
    int n=v.size();
    //brute force
    int max_len=0;int sum=0; 
    int l=0, r=0;

    while (r < n)
    {
        sum+=v[l];
        while (sum> k)
        {
            sum = sum - v[l];
            l++;
        }
        if(sum < = k) max_len= max(max_len, r-l+1);
        r++;
        
    }
    cout<<"max_len"<< max_len<<endl;
    

}

//this is better solution 