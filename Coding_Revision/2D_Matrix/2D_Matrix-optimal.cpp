#include<iostream>
using namespace std;
int main(){
    int matrix[3][3]=
        { {1 , 2 , 3},
        {10, 11, 14},
        {12, 18, 20}};

    int n = 3;
    int m = 3;
    int low = 0, high = (n*m-1);
    int mid =0;
    int target = 100;
    while (low <= high) 
    {
        mid = (low+high) /2;
       int  row = mid /m, col = mid%m;
       if(matrix[row][col] == target) {
        cout<<"center element hai"<<endl;
        break;
       }
       else if(matrix[row][col] < target){
           low = mid+1;
       }
       else{
        high = mid -1;
       }
    }
}

//Time Complexity:-  O(log(m*n))