#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
         int n=nums.size();
        if(n%2!=0)return false;          //n%2==0 pe agar return true karei to ye immediately true return kar dega without checking elements 
                                         //jo fail ho jaega is case ke liye arr[4]={1,1,1,1};
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int j=0;j<n;j++){
            if(mp[nums[j]]>2){
                return false;
            }
        }
         return true;  
    }
};
int main() {
    Solution solution;
    vector<int> nums1 = {1, 1, 1, 2};
    cout<<(solution.isPossibleToSplit(nums1)? "passed" : "failed");
    return 0;
}



