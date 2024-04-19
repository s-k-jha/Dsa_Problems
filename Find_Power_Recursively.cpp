#include<iostream>
using namespace std;
// find power x^y 
int findpow(int x, int y){
    if(y==0){
        return 1;
    }
    int smalloutput= findpow(x,y-1);
    return x*smalloutput;
}
int main()
{
    cout<<findpow(2,3);
    return 0;
    
}
