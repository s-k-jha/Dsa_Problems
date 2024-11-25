//merge sort practice on 26/11/24 at 1:40 A:M
#include <bits/stdc++.h>
using namespace std;
void merger(vector<int>&arr, int left, int mid, int right){
    int n1 = mid-left+1;
    int n2 = right-mid;
    vector<int>L(n1),R(n2);
    for(int i=0; i<n1; i++){
        L[i]=arr[left+i];
        
    }
    for(int j=0; j<n2; j++){
        R[j]=arr[mid+1+j];
        
    }
    int i = 0, j = 0;
    int k = left;
    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j <n2){
        arr[k] = R[j];
        j++;
        k++;
    }
    
}
void mergesort(vector<int>&arr, int left, int right){
    if(left >= right ){
        return;
    }
    int mid = left + (right - left)/2;
    mergesort(arr, left, mid);
    mergesort(arr, mid+1, right);
    merger(arr, left, mid , right);
    
}
void printvec(vector<int>&arr){
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    vector<int>arr = {4,3,2,5,7,2,9,3,2,1};
    int n = arr.size();
    cout<<"array before sort ";
    printvec(arr);
    cout<<endl;
    cout<<"array after merge sort"<<endl;
    mergesort(arr, 0, n-1);
    
    printvec(arr);
    return 0;
}
