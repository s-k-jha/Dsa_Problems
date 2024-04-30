#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={-1,2,3,3,4,5,-1}; int k=4;
    int n=v.size();
    int l=0, r = k-1, max_sum=0, sum=0;
    while(l < k-1){
        sum+=v[l];
    }
    max_sum=sum;
    while ( r < n-1)
    {
        sum = sum - v[l];
        l++;
        r++;
        sum=sum+v[r];
        max_sum=max(max_sum, sum);
     }
   cout<< max_sum;
}