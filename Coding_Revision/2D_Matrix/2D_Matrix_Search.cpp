#include<iostream>
using namespace std;
int main(){
    int matrix[3][3]=
        { {1 , 2 , 3},
        {10, 11, 14},
        {12, 18, 20}};
    int n = sizeof(matrix)/sizeof(matrix[0][0]);
   
    // cout<<size;
    int target = 18;

    for(int i=0; i<3; i++){
        for(int j =0; j<3; j++){
            if(matrix[i][j] == target){
                cout<<"index is "<<i<<","<<j<<endl;
                break;
            }
         
        }
    }
}