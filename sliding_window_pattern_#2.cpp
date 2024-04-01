#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[]={-1, 2, 4,-5, 7, 9, 6} , k=14;
    int n=sizeof(arr)/sizeof(arr[0]);
    //find the all subarray numbers
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
           for(int k=i;k<=j;k++){
              cout<<arr[k]<<" ";
           }
        count=count+1;
        cout<<endl;
        }
        cout<<endl;
    }
   cout<<"total number of subarrays  :-> "<<count<<endl;
    return 0;
}