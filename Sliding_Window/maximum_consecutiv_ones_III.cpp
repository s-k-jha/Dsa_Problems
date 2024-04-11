//brute force by generating all subarrays

#include <iostream>
using namespace std;

int main() {
    int arr[]={1,1,1,0,0,0,1,1,1,1,0}; int k=2;  
    int n=sizeof(arr)/sizeof(arr[0]);
    int max_len=0;
    for(int i=0;i<n;i++){
        int zero=0;
        for(int j=i;j<n;j++){
            if(arr[j]==0){
                zero++;
            }
            if(zero <= k){
                 int len = j - i + 1;
                max_len=max(max_len, len);
            }
            else{
                break;
            }
        }
    }
    cout<<max_len;
}
//Answer is 6 by taking 2 zeros resultant will be (0,1,1,1,1,0) it's give max len by flippig 2 zeroes
